#include <iostream>

using namespace std;

int main()
{
	int number = 0;
	cout << "������������" << endl;
	while (cin >> number)
	{
		if (number == 42)
		{
			cout << "������" << endl;
			break;
		}
		cout << number << endl;
	}
	cout << endl;
	return 0;
}