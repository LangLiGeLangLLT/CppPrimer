#include <iostream>
#include <string>

using namespace std;

struct Sales_data
{
	string isbn;
	int price;

	Sales_data(const string &s, int yuan) :isbn(s), price(yuan)
	{
		cout << "ISBN£º" << isbn << " ¼Û¸ñ£º" << price << endl;
	}
};

int main()
{
	Sales_data("978-7-2", 20);
	return 0;
}