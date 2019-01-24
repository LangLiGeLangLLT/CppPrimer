#include <iostream>
#include <string>
#include <cstddef>
#include <algorithm>
#include <vector>

using namespace std;

class HasPtr
{
	friend void swap(HasPtr&, HasPtr&);
	friend bool operator<(const HasPtr&, const HasPtr&);
	friend void show(vector<HasPtr> v);
public:
	HasPtr(const string &s = string()) :ps(new string(s)), i(0), use(new size_t(1)) {}
	HasPtr(const HasPtr&);
	HasPtr& operator=(const HasPtr&);
	HasPtr(HasPtr&&) noexcept;
	HasPtr& operator=(HasPtr&&) noexcept;
	~HasPtr();

private:
	string * ps;
	int i;
	size_t *use;
};

inline
void swap(HasPtr &rhs1, HasPtr &rhs2)
{
	using std::swap;
	swap(rhs1.ps, rhs2.ps);
	swap(rhs1.i, rhs2.i);
}

inline
bool operator<(const HasPtr &rhs1, const HasPtr &rhs2)
{
	return rhs1.ps->size() < rhs2.ps->size();
}

inline
void show(vector<HasPtr> v)
{
	//for (auto it = v.begin(); it != v.end(); ++it)
	//	cout << *(it->ps) << endl;
	for_each(v.begin(), v.end(), [](const auto &it) {cout << *(it.ps) << endl; });
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

HasPtr::HasPtr(HasPtr &&p) noexcept :ps(p.ps), i(p.i), use(p.use)
{
	++*use;
	p.ps = nullptr;
}

HasPtr& HasPtr::operator=(HasPtr &&rhs) noexcept
{
	++*use;
	if (this != &rhs)
	{
		delete ps;
		ps = rhs.ps;
		i = rhs.i;
		use = rhs.use;
		rhs.ps = nullptr;
	}
	return *this;
	//Лђеп
	//swap(*this, rhs);
	//return *this;
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
	v.push_back(HasPtr("asd"));
	v.push_back(HasPtr("aoufbdoaf"));
	v.push_back(HasPtr("eoighsf"));
	sort(v.begin(), v.end());
	show(v);
	return 0;
}