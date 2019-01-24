#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
	string str = "aaaaabbbcccccccccc";
	list<char> l(str.begin(), str.end());
	cout << count(l.begin(), l.end(), 'a') << endl;
	return 0;
}