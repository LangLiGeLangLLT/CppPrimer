#include <iostream>
#include <string>

using namespace std;

class HasPtr
{
	friend void swap(HasPtr&, HasPtr&);
public:
	HasPtr(const string &s = string()) :ps(new string(s)), i(0) {}
	HasPtr(const HasPtr&);
	HasPtr& operator=(const HasPtr&);
	~HasPtr();
private:
	string * ps;
	int i;
};

inline
void swap(HasPtr &p1, HasPtr &p2)
{
	cout << "¿ªÊ¼½»»»" << endl;
	using std::swap;
	swap(p1.ps, p2.ps);
	swap(p1.i, p2.i);
}

HasPtr::HasPtr(const HasPtr& p) :ps(new string(*p.ps)), i(p.i)
{

}

HasPtr& HasPtr::operator=(const HasPtr& p)
{
	auto newp = new string(*p.ps);
	delete ps;
	ps = newp;
	i = p.i;
	return *this;
}

HasPtr::~HasPtr()
{
	delete ps;
}

int main()
{
	return 0;
}