#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void Count(vector<string> words, vector<string>::size_type length)
{
	cout << count_if(words.begin(), words.end(),
		[](const string &word) {return word.size() > 6; }) << endl;
}

int main()
{
	vector<string> words = { "apple","HelloWorld","banana","NewBalance","Java","Python" };
	Count(words, 6);
	return 0;
}