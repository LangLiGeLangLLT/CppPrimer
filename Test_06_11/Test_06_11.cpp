#include <iostream>

using namespace std;

void reset(int &x)
{
	x = 0;
}

int main()
{
	int x = 5;
	reset(x);
	cout << x << endl;
	return 0;
}