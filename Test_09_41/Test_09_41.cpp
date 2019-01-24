#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<char> chars = { 'a','b','c','d' };
	string s(chars.begin(), chars.end());
	cout << s << endl;
	return 0;
}