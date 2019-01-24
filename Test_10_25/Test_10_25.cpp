#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz)
{
	return s.size() > sz;
}

void biggies(vector<string> words, string::size_type sz)
{
	for_each(words.begin(), partition(words.begin(), words.end(), bind(check_size, _1, sz)),
		[](const string &s) {cout << s << " "; });
}

int main()
{
	vector<string> words = { "hello","world","C++","C#","Java","apple" };
	biggies(words, 4);
	return 0;
}