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
	p.name = "小明";
	p.address = "三亚";
	cout << "姓名为：" << p.getName() << "，住址为：" << p.getAddress() << endl;
	return 0;
}