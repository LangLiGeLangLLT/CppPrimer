#include <iostream>
#include <string>

using namespace std;

int main()
{
	const string ascender = "idfhjklbt";
	const string descender = "qypgj";
	string s = "qwertyuiopasdfghjklzxcvbnm";
	string::size_type pos = 0;
	cout << "即不包含上出头部分，也不包含下出头部分的单词：";
	while ((pos = s.find_first_not_of(ascender + descender, pos)) != string::npos)
	{
		cout << s[pos] << " ";
		++pos;
	}
	cout << endl;
	return 0;
}