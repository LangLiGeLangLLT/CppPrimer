#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> s;
	string str;
	bool book = false;
	while (cin >> str)
		s.push_back(str);
	vector<string>::iterator beg = s.begin();
	while (beg != s.end() - 1)
	{
		if (*beg == *(beg + 1) && isupper((*beg)[0]))
		{
			book = true;
			cout << *beg << endl;
			++beg;
			continue;
		}
		++beg;
	}
	if (!book)
		cout << "û���κε����������ظ����ֵ�" << endl;
	return 0;
}