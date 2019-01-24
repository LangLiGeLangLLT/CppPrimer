#include <iostream>
#include <string>

using namespace std;

void Replace(string &s, string oldVal, string newVal)
{
	for (string::iterator it = s.begin(); it != s.end(); ++it)
	{
		if (s.substr(it - s.begin(), oldVal.size()) == oldVal)
		{
			s.erase(it, it + oldVal.size());
			s.insert(it, newVal.begin(), newVal.end());
		}
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