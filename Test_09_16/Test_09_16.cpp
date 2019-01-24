#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	list<int> l = { 1,2,3,4 };
	vector<int> v = { 2,3,3 };
	list<int>::const_iterator lit = l.cbegin();
	vector<int>::const_iterator vit = v.cbegin();
	while (vit != v.cend() && lit != l.cend())
	{
		if (*vit < *lit)
			cout << "v:" << *vit << "<" << "l:" << *lit << endl;
		else if (*vit > *lit)
			cout << "v:" << *vit << ">" << "l:" << *lit << endl;
		else
			cout << "v:" << *vit << "=" << "l:" << *lit << endl;
		++vit;
		++lit;
	}
	return 0;
}