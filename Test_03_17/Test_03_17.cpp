#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
	string word;
	vector<string> text;
	cout << "请输入一组词：" << endl;
	while (cin >> word)
	{
		for (auto &c : word)
			c = toupper(c);
		text.push_back(word);
	}
	cout << "全部转换为大写：" << endl;
	for (auto i : text)
		cout << i << endl;
	return 0;
}