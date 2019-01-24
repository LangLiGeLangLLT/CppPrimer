#include <iostream>
#include <vector>

using namespace std;

shared_ptr<vector<int>> f()
{
	return shared_ptr<vector<int>>(new vector<int>);
}

void read(shared_ptr<vector<int>> p)
{
	int num;
	while (cin >> num)
		p->push_back(num);
}

void print(shared_ptr<vector<int>> p)
{
	for (auto it = p->begin(); it != p->end(); ++it)
		cout << *it << endl;
}

int main()
{
	shared_ptr<vector<int>> p = f();
	read(p);
	print(p);
	return 0;
}