#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int num = 5;
	vector<int> v = { 1,2,3,4,5,6,7,8,9 };
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); ++it)
	{
		if (*it == num)
		{
			cout << "�ҵ�" << *it << "��������" << it - v.begin() << endl;
			break;
		}
	}
	if (it == v.end())
		cout << "δ���ҵ�" << endl;
	return 0;
}