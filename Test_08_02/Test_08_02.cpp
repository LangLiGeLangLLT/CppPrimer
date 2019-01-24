#include <iostream>
#include <string>

using namespace std;

istream& read(istream& cin)
{
	string s;
	while (cin >> s)
	{
		cout << s << endl;
	}
	cin.clear();
	return cin;
}

int main()
{
	return 0;
}