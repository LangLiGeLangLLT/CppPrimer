#include <iostream>
#include <string>
#include <cstddef>
#include <vector>
#include <algorithm>

using namespace std;

class HasPtr
{
	friend void swap(HasPtr&, HasPtr&);
	friend bool operator<(const HasPtr&, const HasPtr&);
	friend void show(vector<HasPtr>);

public:
	HasPtr(const string &s = string()) :ps(new string(s)), i(0), use(new size_t(1)) {}
	HasPtr(const HasPtr&);
	HasPtr& operator=(const HasPtr&);
	~HasPtr();

private:
	string * ps;
	int i;
	size_t *use;
};

inline
void swap(HasPtr& p1, HasPtr& p2)
{
	cout << "¿ªÊ¼½»»»" << endl;
	using std::swap;
	swap(p1.ps, p2.ps);
	swap(p1.i, p2.i);
}

inline
bool operator<(const HasPtr &rhs1, const HasPtr &rhs2)
{
	return rhs1.ps->size() < rhs2.ps->size();
}

inline
void show(vector<HasPtr> v)
{
	for (vector<HasPtr>::iterator it = v.begin(); it != v.end(); ++it)
		cout << *(it->ps) << endl;
}

HasPtr::HasPtr(const HasPtr& p) :ps(p.ps), i(p.i), use(p.use)
{
	++*use;
}

HasPtr& HasPtr::operator=(const HasPtr& rhs)
{
	++*rhs.use;
	if (--*use == 0)
	{
		delete use;
		delete ps;
	}
	ps = rhs.ps;
	i = rhs.i;
	use = rhs.use;
	return *this;
}

HasPtr::~HasPtr()
{
	if (--*use == 0)
	{
		delete use;
		delete ps;
	}
}

int main()
{
	vector<HasPtr> v;
	v.push_back(HasPtr("abc"));
	v.push_back(HasPtr("jklas"));
	v.push_back(HasPtr("bfd"));
	v.push_back(HasPtr("cde"));
	sort(v.begin(), v.end());
	show(v);
	return 0;
}