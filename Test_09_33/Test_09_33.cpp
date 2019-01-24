#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v = { 1,2,3,4,5 };
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		++it;
		it = v.insert(it, 42);
		++it;
	}
	for (int num : v)
		cout << num << " ";
	cout << endl;
	return 0;
}