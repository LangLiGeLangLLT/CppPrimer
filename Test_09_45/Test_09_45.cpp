#include <iostream>
#include <string>

using namespace std;

void Function(string &name, const string &beginstr, const string &endstr)
{
	name.insert(name.begin(), beginstr.begin(), beginstr.end());
	name.append(endstr);
}

int main()
{
	string name = "Bob";
	Function(name, "Mr.", "III");
	cout << name << endl;
	return 0;
}