#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "请输入字符串：" << endl;
	string s;
	getline(cin, s);
	cout << "将所有字符用 X 代替：" << endl;
	for (auto &c : s)
		c = 'X';
	cout << s << endl;
	return 0;
}