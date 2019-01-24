#include <iostream>

using namespace std;

void f()
{
	int num, y = 1;
	cin >> num;
	for (int i = 1; i <= num; ++i)
		y *= i;
	cout << y << endl;
}

int main()
{
	f();
	return 0;
}