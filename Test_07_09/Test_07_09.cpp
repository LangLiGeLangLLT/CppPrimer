#include <iostream>
#include <string>

using namespace std;

struct Person
{
	string name;
	string address;

	string getName() const
	{
		return this->name;
	}

	string getAddress() const
	{
		return this->address;
	}
};

istream &read(istream &is, Person &item)
{
	is >> item.name >> item.address;
	return is;
}

ostream &print(ostream &os, const Person &item)
{
	os << "ÐÕÃû£º" << item.getName() << ",µØÖ·£º" << item.getName() << endl;
	return os;
}
int main()
{
	Person p;
	if (read(cin, p))
		print(cout, p);
	return 0;
}