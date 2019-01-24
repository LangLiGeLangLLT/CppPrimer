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
	Disc_quote(const string &book, double price, size_t qty, double disc) :
		Quote(book, price), quantity(qty), discount(disc) {}
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
private:
	size_t min_qty = 3;
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
	return 0;
}