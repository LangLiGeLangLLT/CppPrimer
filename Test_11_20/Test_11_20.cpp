#include <iostream>
#include <map>
#include <string>
#include <cstddef>
#include <cctype>

using namespace std;

int main()
{
	map<string, size_t> word_count;
	string word;
	while (cin >> word)
	{
		word = (char)tolower(word.front()) + string(word.begin() + 1, word.end());
		if (ispunct(word.back()))
			word = string(word.begin(), word.end() - 1);
		word_count.insert({ word,++word_count[word] });
	}
	for (const auto &w : word_count)
		cout << w.first << "出现的次数：" << w.second << endl;
	return 0;
}