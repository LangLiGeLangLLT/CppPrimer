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

int main()
{
	Person p;
	p.name = "С��";
	p.address = "����";
	cout << "����Ϊ��" << p.getName() << "��סַΪ��" << p.getAddress() << endl;
	return 0;
}