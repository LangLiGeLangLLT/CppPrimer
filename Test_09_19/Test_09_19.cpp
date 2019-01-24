#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
	string str;
	list<string> List;
	while (cin >> str)
		List.push_back(str);
	for (list<string>::const_iterator it = List.cbegin(); it != List.cend(); ++it)
		cout << *it << " ";
	return 0;
}