#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main()
{
	list<const char*> l = { "hello","world" };
	vector<string> v;
	v.assign(l.cbegin(), l.cend());
	for (string str : v)
		cout << str << " ";
	return 0;
}