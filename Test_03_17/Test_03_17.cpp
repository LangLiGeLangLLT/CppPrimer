#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
	string word;
	vector<string> text;
	cout << "������һ��ʣ�" << endl;
	while (cin >> word)
	{
		for (auto &c : word)
			c = toupper(c);
		text.push_back(word);
	}
	cout << "ȫ��ת��Ϊ��д��" << endl;
	for (auto i : text)
		cout << i << endl;
	return 0;
}