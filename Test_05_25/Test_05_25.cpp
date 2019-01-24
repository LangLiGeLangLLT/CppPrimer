#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
	int num1, num2;
	while (cin >> num1 >> num2)
	{
		try
		{
			cout << num1 * 1.0 / num2 << endl;
		}
		catch (runtime_error err)
		{
			cout << "除数为0！" << endl;
			cout << "是否重新输入（y或n）" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
		}
	}
	return 0;
}