#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int a[] = { 1,1,2,3,4,4,4,5,5 };
	vector<int> v(begin(a), end(a));
	cout << count(v.begin(), v.end(), 4) << endl;
	return 0;
}