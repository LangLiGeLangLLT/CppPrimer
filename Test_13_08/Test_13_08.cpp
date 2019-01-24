#include <iostream>
#include <string>

using namespace std;

class HasPtr {
public:
	HasPtr(const string &s = string()) :ps(new string(s)), i(0) {}
	HasPtr(const HasPtr &HP) :ps(new string(*HP.ps)), i(HP.i) {}
	HasPtr& operator=(const HasPtr &HP);
private:
	string * ps;
	int i;
};

HasPtr& HasPtr::operator=(const HasPtr &HP)
{
	auto newp = new string(*HP.ps);
	delete ps;
	ps = newp;
	i = HP.i;
	return *this;
}

int main()
{
	return 0;
}