#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
	int *begin = ia;
	int *end = ia + sizeof(ia) / sizeof(*ia);
	vector<int> v(begin, end);
	list<int> l(begin, end);
	vector<int>::iterator viter = v.begin();
	list<int>::iterator liter = l.begin();
	while (viter != v.end())
	{
		if (*viter % 2 == 0)
			viter = v.erase(viter);
		else
			++viter;
	}
	while (liter != l.end())
	{
		if (*liter % 2 != 0)
			liter = l.erase(liter);
		else
			++liter;
	}
	cout << "vector: ";
	for (int num : v)
		cout << num << " ";
	cout << endl;
	cout << "list: ";
	for (int num : l)
		cout << num << " ";
	return 0;
}