#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> s;
	int count = 1;
	int max = 0;
	string str;
	string word;
	while (cin >> str)
		s.push_back(str);
	auto beg = s.begin();
	while (beg != s.end() - 1)
	{
		if (*beg != *(beg + 1))
			count = 1;
		if (*beg == *(beg + 1))
			++count;
		if (count > max)
		{
			max = count;
			word = *beg;
		}
		++beg;
	}
	if (max != 1)
		cout << "���� " << word << " ���������� " << max << " ��" << endl;
	else
		cout << "�κε��ʶ�û���������ֹ�" << endl;
	return 0;
}