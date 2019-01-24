#include <iostream>
#include <vector>

using namespace std;

vector<int>* f()
{
	return new vector<int>;
}

void read(vector<int> *v)
{
	int num;
	while (cin >> num)
		v->push_back(num);
}

void print(vector<int> *v)
{
	for (auto it = v->begin(); it != v->end(); ++it)
		cout << *it << endl;
	delete v;
}

int main()
{
	vector<int>* p = f();
	read(p);
	print(p);
	return 0;
}