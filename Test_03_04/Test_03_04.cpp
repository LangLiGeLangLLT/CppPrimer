#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2;
	cout << "�����������ַ���:" << endl;
	cin >> s1 >> s2;
	cout << "�ַ����ȽϽ��:" << endl;
	if (s1 == s2)
		cout << "�����ַ������" << endl;
	else
	{
		cout << "�ַ����ϴ���ǣ�";
		s1 > s2 ? cout << s1 << endl : cout << s2 << endl;
	}
	cout << endl;

	cout << "�����������ַ�����" << endl;
	cin >> s1 >> s2;
	cout << "�ַ����ȽϽ����" << endl;
	if (s1.size() == s2.size())
		cout << "�����ַ����������" << endl;
	else
	{
		cout << "�ַ������Ƚϴ���ǣ�";
		s1.size() > s2.size() ? cout << s1 << endl : cout << s2 << endl;
	}
	return 0;
}