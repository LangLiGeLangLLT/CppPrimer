#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2;
	cout << "请输入两个字符串:" << endl;
	cin >> s1 >> s2;
	cout << "字符串比较结果:" << endl;
	if (s1 == s2)
		cout << "两个字符串相等" << endl;
	else
	{
		cout << "字符串较大的是：";
		s1 > s2 ? cout << s1 << endl : cout << s2 << endl;
	}
	cout << endl;

	cout << "请输入两个字符串：" << endl;
	cin >> s1 >> s2;
	cout << "字符串比较结果：" << endl;
	if (s1.size() == s2.size())
		cout << "两个字符串长度相等" << endl;
	else
	{
		cout << "字符串长度较大的是：";
		s1.size() > s2.size() ? cout << s1 << endl : cout << s2 << endl;
	}
	return 0;
}