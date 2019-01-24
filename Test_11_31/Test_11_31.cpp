#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int main()
{
	multimap<string, string> author_book = {
		{"吴承恩","《西游记》"},
		{"司马迁","《史记》"},
		{"奥斯特洛夫斯基","《钢铁是怎样炼成的》"}
	};
	string author;
	cout << "请输入要删除书的作者：";
	cin >> author;
	multimap<string, string>::iterator findItem = author_book.find(author);
	if (findItem == author_book.end())
		cout << "没有该" << author << endl;
	else
		author_book.erase(author);
	for (const auto &item : author_book)
		cout << item.first << " " << item.second << endl;
	return 0;
}