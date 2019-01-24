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
	virtual void debug() { cout << "bookNo price" << endl; }
	virtual ~Quote() = default;
private:
	string bookNo;
protected:
	double price = 0.0;
};

class Disc_quote :public Quote
{
public:
	Disc_quote() = default;
	Disc_quote(const string &book, double price, size_t qty, double disc)
		:Quote(book, price), quantity(qty), discount(disc) {}
	double net_price(size_t)const = 0;
protected:
	size_t quantity = 0;
	double discount = 0.0;
};

class Bulk_quote :public Disc_quote
{
public:
	Bulk_quote() = default;
	Bulk_quote(const string &book, double price, size_t qty, double disc)
		:Disc_quote(book, price, qty, disc) {}
	double net_price(size_t)const override;
};

double Bulk_quote::net_price(size_t cnt)const
{
	if (cnt >= quantity)
		return quantity * (1 - discount)*price + (cnt - quantity)*price;
	else
		return cnt * (1 - discount)*price;
}

double print_total(ostream &os, const Quote &item, size_t n)
{
	double ret = item.net_price(n);
	os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << endl;
	return ret;
}

int main()
{
	print_total(cout, Bulk_quote("978-132187-4654", 30, 5, 0.2), 6);
	return 0;
}