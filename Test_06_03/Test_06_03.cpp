#include <iostream>

using namespace std;

int f(int x)
{
	int y = 1;
	for (int i = 1; i <= x; ++i)
		y *= i;
	return y;
}

int main()
{
	cout << f(5) << endl;
	return 0;
}