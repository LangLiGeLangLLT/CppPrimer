#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "�������ַ�����" << endl;
	string s;
	getline(cin, s);
	cout << "�������ַ��� X ���棺" << endl;
	for (auto &c : s)
		c = 'X';
	cout << s << endl;
	return 0;
}