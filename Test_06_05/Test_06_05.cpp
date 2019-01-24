#include <iostream>

using namespace std;

double f(double x)
{
	return x < 0 ? -x : x;
}

int main()
{
	int x;
	cin >> x;
	cout << f(x) << endl;
	return 0;
}