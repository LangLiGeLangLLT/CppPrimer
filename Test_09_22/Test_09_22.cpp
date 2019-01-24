#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int some_val = 2;
	vector<int> iv = { 1,2,3,4 };
	vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size() / 2;
	while (iter != mid)
	{
		if (*iter == some_val)
			iter = iv.insert(iter, 2 * some_val);
		++iter;
		mid = iv.begin() + iv.size() / 2;
	}
	for (int num : iv)
		cout << num << " ";
	return 0;
}