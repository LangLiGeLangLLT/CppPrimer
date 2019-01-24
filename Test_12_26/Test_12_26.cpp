#include <iostream>
#include <string>
#include <memory>

using namespace std;

int main()
{
	string s;
	int n = 10001;
	allocator<string> alloc;
	auto const p = alloc.allocate(n);
	auto q = p;
	while (cin >> s)
		alloc.construct(q++, s);
	while (q != p)
	{
		cout << *--q << endl;
		alloc.destroy(q);
	}
	alloc.deallocate(p, n);
	return 0;
}