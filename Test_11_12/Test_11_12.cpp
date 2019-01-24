#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<pair<string, int>> v;
	string s;
	int n;
	while (cin >> s >> n)
		v.push_back(make_pair(s, n));
	for_each(v.begin(), v.end(), [](pair<string, int> p) {cout << p.first << " " << p.second << endl; });
	return 0;
}