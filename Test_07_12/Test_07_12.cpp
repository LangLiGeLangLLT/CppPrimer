#include <iostream>
#include <string>

using namespace std;

struct Sales_data
{
	string isbn;
	int price;

	istream &read(istream &is, Sales_data &item)
	{
		cout << "������ISBN���۸�";
		is >> item.isbn >> item.price;
		return is;
	}

	ostream &print(ostream &os, const Sales_data &item)
	{
		os << "ISBN��" << item.isbn << " �۸�" << item.price << endl;
		return os;
	}

	Sales_data(istream &is, ostream &os)
	{
		read(is, *this);
		print(os, *this);
	}
};

int main()
{
	Sales_data::Sales_data(cin, cout);
	return 0;
}