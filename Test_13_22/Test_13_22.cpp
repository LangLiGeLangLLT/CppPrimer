#include <iostream>
#include <string>

using namespace std;

class HasPtr
{
public:
	HasPtr() {}
	HasPtr(const HasPtr& HP) :ps(new string(*HP.ps)), i(HP.i) {}
	HasPtr& operator=(const HasPtr& HP)
	{
		auto newp = new string(*HP.ps);
		delete ps;
		ps = newp;
		i = HP.i;
		return *this;
	}
	~HasPtr()
	{
		delete ps;
	}
private:
	int i;
	string *ps;
};

int main()
{
	return 0;
}