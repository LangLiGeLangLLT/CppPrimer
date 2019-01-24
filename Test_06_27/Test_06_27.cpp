#include <iostream>
#include <initializer_list>

using namespace std;

void caculate(initializer_list<int> num)
{
	int sum = 0;
	for (auto beg = num.begin(); beg != num.end(); ++beg)
		sum += *beg;
	cout << sum << endl;
}

int main()
{
	initializer_list<int> num = { 0, 1, 3, 4, 5 };
	caculate(num);
	return 0;
}