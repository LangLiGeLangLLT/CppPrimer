#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v_number{ 1, 2, 3, 4, 5, 6 };
	for (auto it = v_number.begin(); it != v_number.end(); ++it)
	{
		if ((*it) % 2 != 0)
			*it = 2 * (*it);
	}
	for (auto i : v_number)
		cout << i << " ";
	cout << endl;
	return 0;
}