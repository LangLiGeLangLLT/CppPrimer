#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> s;
	string str;
	while (cin >> str)
		s.push_back(str);
	vector<string>::iterator beg = s.begin();
	while (beg != s.end() - 1)
	{
		if (*beg == *(beg + 1))
		{
			cout << *beg << endl;
			break;
		}
		++beg;
	}
	if (beg == s.end() - 1)
		cout << "没有任何单词是连续重复出现的" << endl;
	return 0;
}