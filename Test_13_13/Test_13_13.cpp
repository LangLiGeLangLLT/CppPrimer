#include <iostream>
#include <vector>
#include <memory>

using namespace std;
struct X
{
	X() { cout << "X()" << endl; }
	X(const X&) { cout << "X(const &X)" << endl; }
	X& operator=(const X&) { cout << "X& operator=(const X&)" << endl; return *this; }
	~X() { cout << "~X()" << endl; }
};

int main()
{
	allocator<X> alloc;
	alloc.allocate(1);
	X x, y;
	x = y;
	vector<X> v;
	v.push_back(x);
	return 0;
}