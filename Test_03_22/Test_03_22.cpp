#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string word = { "hello world!\nHello!" };
	for (auto it = word.begin(); it != word.end() && *it != '\n'; ++it)
		*it = toupper(*it);
	cout << word << endl;
	return 0;
}