#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1 = { 0, 1, 1, 2 };
	vector<int> v2 = { 0, 1, 1, 2, 3, 5, 8 };
	int i = 0, count = 0;
	for (auto beg = (v1.size() < v2.size() ? v1.begin() : v2.begin()); beg != (v1.size() < v2.size() ? v1.end() : v2.end()); ++beg, ++i)
	{
		if (*beg != (v1.size() < v2.size() ? v2[i] : v1[i]))
		{
			cout << "false" << endl;
			break;
		}
		++count;
	}
	if (count == (v1.size() < v2.size() ? v1.size() : v2.size()))
		cout << "true" << endl;
	return 0;
}