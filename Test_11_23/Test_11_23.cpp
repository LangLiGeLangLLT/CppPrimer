#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	multimap<string, vector<string>> family;
	string first_name, second_name;
	while (cin >> first_name >> second_name)
		family.insert({ first_name,{second_name} });
	for (const auto &person : family)
		for_each(person.second.begin(), person.second.end(),
			[person](const string &s) {cout << person.first << " " << s << endl; });
	return 0;
}