#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <string>
#include <cstddef>

using namespace std;

int main()
{
	//map<string, size_t> word_count;
	//string word;
	//while (cin >> word)
	//	++word_count[word];
	//for (const auto &w : word_count)
	//	cout << w.first << "出现的次数是：" << w.second << endl;

	map<string, size_t> word_count;
	set<string> exclude = { "The","But","And","Or","An","A",
						"the","but","and","or","an","a" };
	string word;
	while (cin >> word)
		if (exclude.find(word) == exclude.end())
			++word_count[word];
	for (const auto &w : word_count)
		cout << w.first << "出现的次数是：" << w.second << endl;
	return 0;
}