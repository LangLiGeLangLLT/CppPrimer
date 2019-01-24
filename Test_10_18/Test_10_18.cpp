#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void biggies(vector<string> &words, vector<string>::size_type sz)
{
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
	stable_sort(words.begin(), words.end(),
		[](const string &a, const string &b) {return a.size() < b.size(); });
	auto wc = partition(words.begin(), words.end(),
		[sz](const string &s) {return s.size() >= sz; });
	auto count = words.end() - wc;
	cout << "有" << count << "个长度大于等于" << sz << "的单词：" << endl;
	for_each(words.begin(), wc,
		[](const string &s) {cout << s << " "; });
	cout << endl;
}

int main()
{
	vector<string> words = { "apple","banana","pear","hello","add","sum" };
	biggies(words, 5);
	return 0;
}