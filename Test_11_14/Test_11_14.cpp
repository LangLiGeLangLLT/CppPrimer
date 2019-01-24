#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
	vector<pair<string, string>> name_birth;
	string name, birth;
	while (cin >> name >> birth)
		name_birth.push_back(make_pair(name, birth));
	for_each(name_birth.begin(), name_birth.end(),
		[](const pair<string, string> &person) {
		cout << person.first << " " << person.second << endl;
	});
	return 0;
}