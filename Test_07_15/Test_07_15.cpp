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
		cout << "姓名：" << name << "\t年龄：" << age << "\t地址：" << address << endl;
	}

	Person(istream &is, ostream &os)
	{
		read(is, *this);
		print(os, *this);
	}

	istream &read(istream &is, Person &person)
	{
		cout << "请输入姓名、年龄、地址：";
		is >> person.name >> person.age >> person.address;
		return is;
	}

	ostream &print(ostream &os, const Person &person)
	{
		os << "姓名：" << person.name << "\t年龄：" << person.age << "\t地址：" << person.address << endl;
		return os;
	}
};

int main()
{
	Person("小明", 20, "温州");
	Person(cin, cout);
	return 0;
}