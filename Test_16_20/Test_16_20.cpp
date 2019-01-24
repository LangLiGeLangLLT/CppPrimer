#include <iostream>
#include <vector>

using namespace std;

template <typename Container>
void print(const Container& container)
{
	for (auto it = container.begin(); it != container.end(); ++it)
		cout << *it << " ";
	cout << endl;
}

int main()
{
	print(vector<int>{1, 2, 3, 4, 5});
	return 0;
}