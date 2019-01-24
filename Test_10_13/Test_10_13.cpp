#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isLonger(const string &s)
{
	if (s.size() >= 5)
		return true;
	else
		return false;
}

int main()
{
	vector<string> v = { "hello","world","C++","Java","C#","Python" };
	for (const string &s : v)
		cout << s << " ";
	cout << endl;
	vector<string>::iterator end_partition = partition(v.begin(), v.end(), isLonger);
	for (vector<string>::iterator it = v.begin(); it != end_partition; ++it)
		cout << *it << " ";
	cout << endl;
	return 0;
}