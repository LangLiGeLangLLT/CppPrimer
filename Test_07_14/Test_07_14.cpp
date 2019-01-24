#include <iostream>
#include <string>

using namespace std;

struct Sales_data
{
	string isbn;
	int price;

	Sales_data(const string &s, const int &yuan) :isbn(s), price(yuan)
	{
		cout << "ISBN£º" << isbn << " ¼Û¸ñ£º" << price << endl;
	}
};

int main()
{
	Sales_data("978-7-2", 88);
	return 0;
}