#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2, s3;
	cout << "请输入字符串s1、s2、s3：" << endl;
	cin >> s1 >> s2 >> s3;
	cout << "连接成的大字符串是：" << s1 + s2 + s3 << endl;
	cout << "空格分开：" << s1 << " " << s2 << " " << s3 << endl;
	return 0;
}