#include <iostream>
#include <string>
#include <cstddef>

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
	Bulk_quote(const string &book, double sales_price, double disc)
		:Quote(book, sales_price), discount(disc) {}
	Bulk_quote(const Bulk_quote&) = default;
	Bulk_quote(Bulk_quote&&) = default;
	Bulk_quote& operator=(const Bulk_quote&) = default;
	Bulk_quote& operator=(Bulk_quote&&) = default;
	~Bulk_quote() = default;
private:
	double discount = 0.0;
};

int main()
{
	return 0;
}