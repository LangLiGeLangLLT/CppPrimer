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
	virtual ~Quote() { cout << "����~Quote()" << endl; };
private:
	string bookNo;
protected:
	double price = 0.0;
};

class Bulk_quote :public Quote
{
public:
	Bulk_quote() = default;
	Bulk_quote(const string &book, double sales_price, double disc)
		:Quote(book, sales_price), discount(disc)
	{
		cout << "�Զ��幹�캯��" << endl;
	}
	Bulk_quote(const Bulk_quote &item) :Quote(item) { cout << "�������캯��" << endl; }
	Bulk_quote(Bulk_quote &&item) :Quote(std::move(item)) { cout << "�ƶ����캯��" << endl; }
	Bulk_quote& operator=(const Bulk_quote &item) { Quote::operator=(item); return *this; }
	Bulk_quote& operator=(Bulk_quote &&item) { Quote::operator=(item); return *this; }
	~Bulk_quote() = default;
private:
	double discount = 0.0;
};

int main()
{
	Bulk_quote bulk("978-6545-456", 20, 0.2);
	Bulk_quote bulk1 = bulk;
	return 0;
}