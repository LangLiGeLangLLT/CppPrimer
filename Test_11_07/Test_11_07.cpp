#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	map<string, vector<string>> family = { {"��",{"��"}},{ "��",{ "��" } },{ "��",{ "Ȩ" } } };
	string first_name, second_name;
	while (cin >> first_name >> second_name)
		family[first_name].push_back(second_name);
	for (const auto &people : family)
	{
		cout << "�գ�" << people.first << " ����";
		for_each(people.second.begin(), people.second.end(), [](const string &s) {cout << s; });
		cout << endl;
	}
	return 0;
}