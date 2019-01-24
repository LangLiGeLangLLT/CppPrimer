#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	if (num2 == 0)
		throw runtime_error("第二个数是 0");
	else
		cout << num1 * 1.0 / num2 << endl;
	return 0;
}