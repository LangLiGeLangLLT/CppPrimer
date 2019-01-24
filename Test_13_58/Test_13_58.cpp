#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Foo
{
public:
	Foo sorted() && ;
	Foo sorted() const &;

private:
	vector<int> data = { 1,5,9,2,4 };
};

Foo Foo::sorted() &&
{
	cout << "&&" << endl;
	sort(data.begin(), data.end());
	for_each(data.begin(), data.end(), [](const int &it) {cout << it << " "; });
	return *this;
}

Foo Foo::sorted() const &
{
	cout << "const &" << endl;
	Foo ret(*this);
	sort(ret.data.begin(), ret.data.end());
	for_each(ret.data.begin(), ret.data.end(), [](const int &it) {cout << it << " "; });
	return ret;

	//不可行
	//Foo ret(*this);
	//return ret.sorted();

	//可行
	//return Foo(*this).sorted();
}

int main()
{
	Foo().sorted();
	cout << endl;
	Foo f;
	f.sorted();
	cout << endl;
	return 0;
}