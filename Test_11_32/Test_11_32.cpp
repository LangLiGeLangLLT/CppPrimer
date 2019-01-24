#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
	multimap<string, string> author_book = {
		{ "吴承恩","《西游记》" },
		{ "司马迁","《史记》" },
		{ "奥斯特洛夫斯基","《钢铁是怎样炼成的》" },
		{ "吴承恩","《西游记》" },
		{ "司马迁","《史记》" },
		{ "奥斯特洛夫斯基","《钢铁是怎样炼成的》" }
	};
	multiset<string> authors;
	for (auto it = author_book.begin(); it != author_book.end(); ++it)
		authors.insert(it->first);
	for (auto it = authors.begin(); it != authors.end(); ++it)
		cout << *it << author_book.find(*it)->second << endl;
	return 0;
}