#include <iostream>
#include <string>
#include <cstddef>
#include <vector>
#include <memory>
#include <algorithm>

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
private:
	string bookNo;
protected:
	double price = 0.0;
};

class Bulk_quote :public Quote
{
public:
	using Quote::Quote;
	Bulk_quote() = default;
	Bulk_quote(const string &book, double sales_price, size_t qty, double disc)
		:Quote(book, sales_price), min_qty(qty), discount(disc) {}
	Bulk_quote(const Bulk_quote&) = default;
	Bulk_quote(Bulk_quote&&) = default;
	Bulk_quote& operator=(const Bulk_quote&) = default;
	Bulk_quote& operator=(Bulk_quote&&) = default;
	double net_price(size_t)const override;
	~Bulk_quote() = default;
private:
	size_t min_qty = 0;
	double discount = 0.0;
};

double Bulk_quote::net_price(size_t cnt)const
{
	if (cnt >= min_qty)
		return cnt * (1 - discount)*price;
	else
		return cnt * price;
}

int main()
{
	double sum = 0;
	int buy = 5;
	vector<shared_ptr<Quote>> v;
	v.push_back(make_shared<Quote>("978-654-45640", 20));
	v.push_back(make_shared<Bulk_quote>("978-4651-4230", 30, 3, 0.2));
	v.push_back(make_shared<Quote>("978-654-45641", 30));
	for_each(v.begin(), v.end(), [&sum, buy](const shared_ptr<Quote> &item) {
		sum += item->net_price(buy);
	});
	cout << "total price: " << sum << endl;
	return 0;
}