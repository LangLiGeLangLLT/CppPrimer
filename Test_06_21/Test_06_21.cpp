#include <iostream>

using namespace std;

int Max(int x, const int *y)
{
	return x < *y ? *y : x;
}

int main()
{
	int x, y;
	cin >> x >> y;
	cout << Max(x, &y) << endl;
	return 0;
}