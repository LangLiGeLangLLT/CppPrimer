#include <iostream>
#include <string>
#include <cstddef>
#include <memory>

using namespace std;

int main()
{
	string a = "hello";
	string b = "world";
	unique_ptr<char[]> chars_ptr(new char[(a + b).size()]);
	for (size_t i = 0; i != (a + b).size(); ++i)
		chars_ptr[i] = (a + b)[i];
	for (size_t i = 0; i != (a + b).size(); ++i)
		cout << chars_ptr[i];
	cout << endl;
	return 0;
}