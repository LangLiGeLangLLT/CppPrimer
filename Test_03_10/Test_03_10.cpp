#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
	string s;
	cout << "ÇëÊäÈë×Ö·û´®£º" << endl;
	getline(cin, s);
	decltype(s.size())length = s.size();
	for (string::size_type i = 0; i < length; i++)
	{
		if (ispunct(s[i]))
		{
			for (string::size_type j = i; j < length - 1; j++)
				s[j] = s[j + 1];
			s[length - 1] = '\0';
			length--;
		}
		if (ispunct(s[length - 1]))
		{
			s[length - 1] = '\0';
			length--;
		}
	}
	for (string::size_type i = 0; i < length; i++)
		cout << s[i];
	cout << endl;
	return 0;
}