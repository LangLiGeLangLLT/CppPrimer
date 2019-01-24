#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace	std;

int main()
{
	vector<string> v = { "hello","hello","world","Java","Java","C++","C#" };
	for (string s : v)
		cout << s << " ";
	cout << endl;
	sort(v.begin(), v.end());
	vector<string>::iterator end_unique = unique(v.begin(), v.end());
	v.erase(end_unique, v.end());
	for (string s : v)
		cout << s << " ";
	cout << endl;
	return 0;
}