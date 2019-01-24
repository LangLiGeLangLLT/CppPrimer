#include <iostream>

using namespace std;

int f()
{
	static int x = 0;
	return x++;
}

int main()
{
	for (int i = 0; i < 10; ++i)
		cout << f() << endl;
	return 0;
}