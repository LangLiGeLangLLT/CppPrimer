#include <iostream>

using namespace std;

void print(const int &x)
{
	cout << x << endl;
}

void print(const int *a, const int length)
{
	for (size_t i = 0; i != length; ++i)
		cout << a[i] << " ";
}

int main()
{
	int i = 0, j[2] = { 0, 1 };
	print(i);
	print(j, sizeof(j) / sizeof(*j));
	cout << endl;
	return 0;
}