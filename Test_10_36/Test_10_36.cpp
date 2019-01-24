#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	list<int> numbers = { 0,0,1,0,2 };
	list<int>::reverse_iterator end_zero = find(numbers.rbegin(), numbers.rend(), 0);
	cout << *end_zero << endl;
	return 0;
}