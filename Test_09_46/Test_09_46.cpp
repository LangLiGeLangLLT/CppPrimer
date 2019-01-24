#include <iostream>
#include <string>

using namespace std;

void Function(string &name, string beginstr, string endstr)
{
	name.insert(0, beginstr);
	name.insert(name.size(), endstr);
}

int main()
{
	string name = "Bob";
	Function(name, "Mr.", "III");
	cout << name << endl;
	return 0;
}