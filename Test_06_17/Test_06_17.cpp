#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void have_upper(const string &s)
{
	bool book = false;
	for (int i = 0; i != s.size(); ++i)
	{
		if (isupper(s[i]))
		{
			book = true;
			cout << s << " �к��д�д��ĸ" << endl;
			break;
		}
	}
	if (!book)
		cout << s << " �в����д�д��ĸ" << endl;
}

void change_lower(string &s)
{
	for (int i = 0; i != s.size(); ++i)
	{
		if (s[i] >= 'A'&&s[i] <= 'Z')
			s[i] += 'a' - 'A';
	}
}

int main()
{
	string s;
	cin >> s;
	have_upper(s);
	change_lower(s);
	cout << s << endl;
	return 0;
}