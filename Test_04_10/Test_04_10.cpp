#include <iostream>

using namespace std;

int main()
{
	int number = 0;
	cout << "请输入整数：" << endl;
	while (cin >> number)
	{
		if (number == 42)
		{
			cout << "结束！" << endl;
			break;
		}
		cout << number << endl;
	}
	cout << endl;
	return 0;
}