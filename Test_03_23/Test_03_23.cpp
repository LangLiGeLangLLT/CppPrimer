#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> number{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (auto it = number.begin(); it != number.end(); it++)
	{
		*it = 2 * (*it);
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}