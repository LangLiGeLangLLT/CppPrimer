#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int main()
{
	list<int> l;
	vector<int> v = { 1,2,1,4,4,5,6,2,3 };
	unique_copy(v.begin(), v.end(), inserter(l, l.begin()));
	for_each(l.begin(), l.end(), [](int n) {cout << n << " "; });
	return 0;
}