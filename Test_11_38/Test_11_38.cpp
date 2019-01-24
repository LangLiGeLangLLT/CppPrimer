#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <cstddef>

using namespace std;

int main()
{
	unordered_map<string, size_t> word_count;
	string word;
	while (cin >> word)
		++word_count[word];
	for (const auto &w : word_count)
		cout << w.first << "出现的次数：" << w.second << endl;
	return 0;
}