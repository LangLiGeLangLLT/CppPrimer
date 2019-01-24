#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v = { 1,2,3,4,5,6,7,8,9 };
	int num = 9;
	vector<int>::const_iterator it = v.cbegin();
	while (it != v.cend())
	{
		if (*it == num)
		{
			cout << "找到" << *it << "索引是" << it - v.cbegin() << endl;
			break;
		}
		++it;
	}
	if (it == v.cend())
		cout << "未能找到" << endl;
	return 0;
}