#include <iostream>

using namespace std;

int main()
{
	int val = 12;
	auto f = [&val]()->bool {
		while (val != 0)
			--val;
		return true;
	};
	bool result = f();
	cout << result << endl;
	return 0;
}