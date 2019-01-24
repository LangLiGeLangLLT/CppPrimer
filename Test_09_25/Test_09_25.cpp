#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v = { 1,2,3,4,5 };
	v.erase(v.end(), v.end());
	for (int num : v)
		cout << num;
	return 0;
}