#include <iostream>
#include <string>
#include <cstddef>
#include <memory>

using namespace std;

int main()
{
	string s;
	cin >> s;
	unique_ptr<char[]> chars_ptr(new char[s.size()]);
	for (size_t i = 0; i != s.size(); ++i)
		chars_ptr[i] = s[i];
	for (size_t i = 0; i != s.size(); ++i)
		cout << chars_ptr[i];
	cout << endl;
	return 0;
}