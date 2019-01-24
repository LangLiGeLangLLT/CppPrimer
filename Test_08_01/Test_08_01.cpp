#include <iostream>
#include <string>

using namespace std;

istream& read(istream& is)
{
	string s;
	while (is >> s)
		cout << s << endl;
	is.clear();
	return is;
}

int main()
{
	return 0;
}