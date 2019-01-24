#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> numbers = { 0,1,2,3,4,5,6,7,8,9 };
	vector<int>::iterator it = numbers.begin();
	while (it != numbers.end())
	{
		if (*it % 2)
			it = numbers.insert(++it, *it);
		++it;
	}
	for (int num : numbers)
		cout << num << " ";
	cout << endl;
	return 0;
}