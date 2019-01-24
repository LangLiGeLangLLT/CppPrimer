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
		cout << "单词 " << word << " 连续出现了 " << max << " 次" << endl;
	else
		cout << "任何单词都没有连续出现过" << endl;
	return 0;
}