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
		cout << "没有任何单词是连续重复出现的" << endl;
	return 0;
}