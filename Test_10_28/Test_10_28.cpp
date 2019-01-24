#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int main()
{
	vector<int> v = { 1,2,3,4,5,6,7,8,9 };
	list<int> l1, l2, l3;
	copy(v.begin(), v.end(), inserter(l1, l1.begin()));
	copy(v.begin(), v.end(), back_inserter(l2));
	copy(v.begin(), v.end(), front_inserter(l3));
	for_each(l1.begin(), l1.end(), [](int n) {cout << n << " "; });
	cout << endl;
	for_each(l2.begin(), l2.end(), [](int n) {cout << n << " "; });
	cout << endl;
	for_each(l3.begin(), l3.end(), [](int n) {cout << n << " "; });
	cout << endl;
	return 0;
}