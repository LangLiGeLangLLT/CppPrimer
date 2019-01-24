#include <iostream>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	list<string> words = { "hello","world","C#","world","C++","C#","Java" };
	words.sort();
	words.unique();
	for_each(words.begin(), words.end(), [](const string &s) {cout << s << " "; });
	return 0;
}