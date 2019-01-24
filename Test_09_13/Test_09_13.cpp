#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	list<int> li = { 1,3,5,7,9 };
	vector<int> vi = { 2,4,6,8,10 };
	vector<double> vd(li.begin(), li.end());
	for (vector<double>::iterator it = vd.begin(); it != vd.end(); ++it)
		cout << *it << " ";
	cout << endl;
	vector<double> vd2(vi.begin(), vi.end());
	for (vector<double>::iterator it = vd2.begin(); it != vd2.end(); ++it)
		cout << *it << " ";
	return 0;
}