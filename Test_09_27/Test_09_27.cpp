#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
	forward_list<int> numbers = { 1,2,3,5,7,4,9 };
	forward_list<int>::iterator prev = numbers.before_begin();
	forward_list<int>::iterator curr = numbers.begin();
	while (curr != numbers.end())
	{
		if (*curr % 2 != 0)
			curr = numbers.erase_after(prev);
		else
		{
			prev = curr;
			++curr;
		}
	}
	for (int num : numbers)
		cout << num << " ";
	return 0;
}