#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1 = { 1,2,3,4 };
	vector<int> v2 = { 1,2,3,4 };
	vector<int> v3 = { 2,3,4 };
	if (v1 == v2)
		cout << "v1与v2相等" << endl;
	else
		cout << "v1与v2不相等" << endl;
	if (v1 == v3)
		cout << "v1与v3相等" << endl;
	else
		cout << "v1与v3不相等" << endl;
	return 0;
}