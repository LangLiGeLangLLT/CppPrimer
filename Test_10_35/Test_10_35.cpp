#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> numbers = { 1,2,3,4,5,6,7,8,9 };
	vector<int>::iterator it = numbers.end();
	while (it != numbers.begin())
		cout << *--it << " ";
	return 0;
}