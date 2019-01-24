#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v, int begin)
{
	if (begin != v.size())
	{
		cout << v[begin] << endl;
		print(v, begin + 1);
	}
}

int main()
{
	vector<int> v = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	print(v, 0);
	return 0;
}