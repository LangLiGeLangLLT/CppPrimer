#include <iostream>
#include <string>
#include <cstddef>

using namespace std;

class Quote
{
public:
	Quote() = default;
	Quote(const string &book, double sales_price) :bookNo(book), price(sales_price) {}
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
	Bulk_quote() = default;
	Bulk_quote(const string&, double, size_t, double);
	double net_price(size_t)const override;
private:
	size_t min_qty = 0;
	double discount = 0.0;
};

Bulk_quote::Bulk_quote(const string &book, double p, size_t qty, double disc)
	:Quote(book, p), min_qty(qty), discount(disc) {}

double Bulk_quote::net_price(size_t cnt)const
{
	if (cnt >= min_qty)
		return cnt * (1 - discount)*price;
	else
		return cnt * price;
}

double print_total(ostream &os, const Quote &item, size_t n)
{
	double ret = item.net_price(n);
	os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << endl;
	return ret;
}

int main()
{
	print_total(cout, Quote("978-642654-4564", 30), 5);
	print_total(cout, Bulk_quote("978-58465-65654", 20, 3, 0.2), 6);
	return 0;
}