#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

void Insert(forward_list<string> &strs, string str1, string str2)
{
	forward_list<string>::iterator prev = strs.before_begin();
	forward_list<string>::iterator curr = strs.begin();
	while (curr != strs.end())
	{
		if (*curr == str1)
		{
			prev = curr;
			curr = strs.insert_after(prev, str2);
			return;
		}
		else
		{
			prev = curr;
			++curr;
		}
	}
	if (curr == strs.end())
		strs.insert_after(prev, str2);

}

int main()
{
	forward_list<string> strs = { "hello","world","C++","Java" };
	for (string str : strs)
		cout << str << " ";
	cout << endl;
	Insert(strs, "world", "C#");
	for (string str : strs)
		cout << str << " ";
	cout << endl;
	Insert(strs, "C#", "Object-C");
	for (string str : strs)
		cout << str << " ";
	cout << endl;
	Insert(strs, "Python", "Python");
	for (string str : strs)
		cout << str << " ";
	cout << endl;
	return 0;
}