#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
	string str;
	deque<string> strDeque;
	while (cin >> str)
		strDeque.push_back(str);
	for (deque<string>::const_iterator it = strDeque.cbegin(); it != strDeque.cend(); ++it)
		cout << *it << " ";
	return 0;
}