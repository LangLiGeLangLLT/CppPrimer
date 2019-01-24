#include <iostream>
#include <string>
#include <map>
#include <cctype>
#include <cstddef>

using namespace std;

int main()
{
	map<string, size_t> word_count;
	string word;
	while (cin >> word)
	{
		word = (char)tolower(*word.begin()) + string(word.begin() + 1, word.end());
		if (ispunct(*(word.end() - 1)))
			word = string(word.begin(), word.end() - 1);
		++word_count[word];
	}
	for (const auto &w : word_count)
		cout << w.first << "出现的次数为：" << w.second << endl;
	return 0;
}