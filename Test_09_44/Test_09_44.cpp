#include <iostream>
#include <string>

using namespace std;

void Replace(string &s, string oldVal, string newVal)
{
	for (int i = 0; i != s.size(); ++i)
	{
		if (s.substr(i, i + oldVal.size()) == oldVal)
			s.replace(i, oldVal.size(), newVal);
	}
}

int main()
{
	string s = "tho thru";
	Replace(s, "tho", "though");
	Replace(s, "thru", "through");
	cout << s << endl;
	return 0;
}