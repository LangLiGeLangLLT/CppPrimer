#include <iostream>
#include <string>

using namespace std;

struct Person
{
	string name;
	int age;
	string address;

	Person(const string &name, int age, const string &address) :name(name), age(age), address(address)
	{
		cout << "������" << name << "\t���䣺" << age << "\t��ַ��" << address << endl;
	}

	Person(istream &is, ostream &os)
	{
		read(is, *this);
		print(os, *this);
	}

	istream &read(istream &is, Person &person)
	{
		cout << "���������������䡢��ַ��";
		is >> person.name >> person.age >> person.address;
		return is;
	}

	ostream &print(ostream &os, const Person &person)
	{
		os << "������" << person.name << "\t���䣺" << person.age << "\t��ַ��" << person.address << endl;
		return os;
	}
};

int main()
{
	Person("С��", 20, "����");
	Person(cin, cout);
	return 0;
}