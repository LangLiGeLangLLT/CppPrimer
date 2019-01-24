#include <iostream>
#include "Chapter6.h"

using namespace std;

int main()
{
	int x;
	cin >> x;
	cout << Abs(x) << endl;
	return 0;
}

int Abs(int x)
{
	return x < 0 ? -x : x;
}