#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> numbers = { 0,1,2,3,4,5,6,7,8,9 };
	list<int> l;
	copy(numbers.rbegin() + 3, numbers.rbegin() + 8, inserter(l, l.begin()));
	for_each(l.begin(), l.end(), [](int n) {cout << n << " "; });
	return 0;
}