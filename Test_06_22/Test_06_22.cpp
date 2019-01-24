#include <iostream>

using namespace std;

void Swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int x, y;
	cin >> x >> y;
	Swap(&x, &y);
	cout << x << " " << y << endl;
	return 0;
}