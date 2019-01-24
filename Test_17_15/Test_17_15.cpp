#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
	string pattern("[^c]ei");
	regex r("[[:alpha:]]*" + pattern + "[[:alpha:]]*");
	smatch results;
	string word;
	while (cin >> word)
	{
		if (regex_search(word, results, r))
			cout << "����" << endl;
		else
			cout << "������" << endl;
	}
	return 0;
}