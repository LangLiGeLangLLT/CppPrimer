#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

int main()
{
	vector<string> v = { "apple","hello","pear","blue","green" };
	for (const string &s : v)
		cout << s << " ";
	cout << endl;
	sort(v.begin(), v.end());
	for (const string &s : v)
		cout << s << " ";
	cout << endl;
	stable_sort(v.begin(), v.end(), isShorter);
	for (const string &s : v)
		cout << s << " ";
	cout << endl;
	return 0;
}