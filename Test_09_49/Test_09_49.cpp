#include <iostream>
#include <string>

using namespace std;

int main()
{
	const string ascender = "idfhjklbt";
	const string descender = "qypgj";
	string s = "qwertyuiopasdfghjklzxcvbnm";
	string::size_type pos = 0;
	cout << "���������ϳ�ͷ���֣�Ҳ�������³�ͷ���ֵĵ��ʣ�";
	while ((pos = s.find_first_not_of(ascender + descender, pos)) != string::npos)
	{
		cout << s[pos] << " ";
		++pos;
	}
	cout << endl;
	return 0;
}