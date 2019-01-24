#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> numbers = { 1,2,3,4,5,6,7,8 };
	for_each(numbers.rbegin(), numbers.rend(), [](int n) {cout << n << " "; });
	return 0;
}