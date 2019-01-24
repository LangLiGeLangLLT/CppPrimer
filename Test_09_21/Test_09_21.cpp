#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string word;
	vector<string> v;
	vector<string>::iterator it = v.begin();
	while (cin >> word)
		it = v.insert(it, word);
	for (string str : v)
		cout << str << " ";
	return 0;
}