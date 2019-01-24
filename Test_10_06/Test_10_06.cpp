#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	vector<int> v = { 1,2,3,4,5 };
	fill_n(v.begin(), v.size(), 0);
	for (int num : v)
		cout << num << " ";
	cout << endl;
	return 0;
}