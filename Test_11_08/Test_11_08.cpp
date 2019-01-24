#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	vector<string> words = { "apple","hello","world","hello","apple" };
	sort(words.begin(), words.end());
	words.erase(unique(words.begin(), words.end()), words.end());
	for_each(words.begin(), words.end(), [](const string &s) {cout << s << " "; });
	return 0;
}