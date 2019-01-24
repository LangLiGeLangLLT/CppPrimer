#include <iostream>

using namespace std;

int main()
{
	int i = 50, sum = 0;
	while (sum += i, i++, i <= 100);
	cout << sum << endl;
	return 0;
}