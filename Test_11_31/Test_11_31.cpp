#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int main()
{
	multimap<string, string> author_book = {
		{"��ж�","�����μǡ�"},
		{"˾��Ǩ","��ʷ�ǡ�"},
		{"��˹�����˹��","���������������ɵġ�"}
	};
	string author;
	cout << "������Ҫɾ��������ߣ�";
	cin >> author;
	multimap<string, string>::iterator findItem = author_book.find(author);
	if (findItem == author_book.end())
		cout << "û�и�" << author << endl;
	else
		author_book.erase(author);
	for (const auto &item : author_book)
		cout << item.first << " " << item.second << endl;
	return 0;
}