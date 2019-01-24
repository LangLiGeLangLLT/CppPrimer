#include <iostream>
#include <list>
#include <forward_list>

using namespace std;

int main()
{
	list<int> li = { 0,1,2,3,4,5,6,7,8,9 };
	forward_list<int> fi(li.begin(), li.end());
	list<int>::iterator it = li.begin();
	while (it != li.end())
	{
		if (*it % 2 != 0)
		{
			it = li.insert(it, *it);
			++it;
			++it;
		}
		else
			it = li.erase(it);
	}
	for (int num : li)
		cout << num << " ";
	cout << endl;
	forward_list<int>::iterator prev = fi.before_begin();
	forward_list<int>::iterator curr = fi.begin();
	while (curr != fi.end())
	{
		if (*curr % 2 != 0)
		{
			prev = curr;
			curr = fi.insert_after(prev, *curr);
			prev++;
			curr++;
		}
		else
			curr = fi.erase_after(prev);
	}
	for (int num : fi)
		cout << num << " ";
	cout << endl;
	return 0;
}