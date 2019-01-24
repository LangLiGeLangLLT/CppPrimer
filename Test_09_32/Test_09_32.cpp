#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vi = { 0,1,2,3,4,5,6,7,8,9 };
	vector<int>::iterator iter = vi.begin();
	while (iter != vi.end())
	{
		if (*iter % 2 != 0)
		{
			iter = vi.insert(iter, *iter++);
			++iter;
		}
		else
			iter = vi.erase(iter);
	}
	for (int num : vi)
		cout << num << " ";
	cout << endl;
	return 0;
}