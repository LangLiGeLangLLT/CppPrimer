#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
	multimap<string, string> author_book = {
		{ "��ж�","�����μǡ�" },
		{ "˾��Ǩ","��ʷ�ǡ�" },
		{ "��˹�����˹��","���������������ɵġ�" },
		{ "��ж�","�����μǡ�" },
		{ "˾��Ǩ","��ʷ�ǡ�" },
		{ "��˹�����˹��","���������������ɵġ�" }
	};
	multiset<string> authors;
	for (auto it = author_book.begin(); it != author_book.end(); ++it)
		authors.insert(it->first);
	for (auto it = authors.begin(); it != authors.end(); ++it)
		cout << *it << author_book.find(*it)->second << endl;
	return 0;
}