#include <iostream>
#include <string>
#include <cstddef>
#include <memory>
#include <set>

using namespace std;

class Quote
{
public:
	Quote() = default;
	Quote(const string &book, double sales_price) :bookNo(book), price(sales_price) {}
	Quote(const Quote&) = default;
	Quote(Quote&&) = default;
	Quote& operator=(const Quote&) = default;
	Quote& operator=(Quote&&) = default;
	string isbn()const { return bookNo; }
	virtual double net_price(size_t n)const { return n * price; }
	virtual ~Quote() = default;
	virtual Quote* clone()const & { return new Quote(*this); }
	virtual Quote* clone() && { return new Quote(std::move(*this)); }
private:
	string bookNo;
protected:
	double price = 0.0;
};

class Bulk_quote :public Quote
{
public:
	Bulk_quote() = default;
	Bulk_quote(const string &book, double sales_price, size_t qty, double disc)
		:Quote(book, sales_price), min_qty(qty), discount(disc) {}
	Bulk_quote(const Bulk_quote&) = default;
	Bulk_quote(Bulk_quote&&) = default;
	Bulk_quote& operator=(const Bulk_quote&) = default;
	Bulk_quote& operator=(Bulk_quote&&) = default;
	double net_price(size_t)const override;
	~Bulk_quote() = default;
	virtual Bulk_quote* clone()const & { return new Bulk_quote(*this); }
	virtual Bulk_quote* clone() && { return new Bulk_quote(std::move(*this)); }
private:
	size_t min_qty = 0;
	double discount = 0.0;
};

class Basket
{
public:
	void add_item(const shared_ptr<Quote> &sale) { items.insert(sale); }
	void add_item(const Quote &sale) { items.insert(shared_ptr<Quote>(sale.clone())); }
	void add_item(Quote &&sale) { items.insert(shared_ptr<Quote>(std::move(sale).clone())); }
	double total_receipt(ostream&)const;
private:
	static bool compare(const shared_ptr<Quote> &lhs, const shared_ptr<Quote> &rhs)
	{
		return lhs->isbn() < rhs->isbn();
	}
	multiset<shared_ptr<Quote>, decltype(compare)*>items{ compare };
};

double Bulk_quote::net_price(size_t cnt)const
{
	if (cnt >= min_qty)
		return cnt * (1 - discount)*price;
	else
		return cnt * price;
}

double print_total(ostream& os, const Quote &item, size_t n)
{
	double ret = item.net_price(n);
	os << "ISBN: " << item.isbn() << " # sold" << n << " total price: " << ret << endl;
	return ret;
}

double Basket::total_receipt(ostream &os)const
{
	double sum = 0.0;
	for (auto iter = items.cbegin(); iter != items.cend(); iter = items.upper_bound(*iter))
		sum += print_total(os, **iter, items.count(*iter));
	os << "Total Sale: " << sum << endl;
	return sum;
}

int main()
{
	Basket basket;
	basket.add_item(Quote("978-564-546", 30));
	basket.add_item(Bulk_quote("978-546-313", 20, 5, 0.2));
	basket.total_receipt(cout);
	return 0;
}