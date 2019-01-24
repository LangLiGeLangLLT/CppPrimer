#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v = { 1,2,3,4,5,6,7,8,9 };
	cout << v.at(0) << endl;
	cout << v[0] << endl;
	cout << v.front() << endl;
	cout << *v.begin() << endl;
	return 0;
}