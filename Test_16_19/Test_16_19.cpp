#include <iostream>
#include <vector>

using namespace std;

template <typename Container>
void print(const Container &v)
{
	auto it = v.begin();
	for (typename Container::size_type i = 0; i != v.size(); ++i, ++it)
		cout << *it << " ";
	cout << endl;
}

int main()
{
	print(vector<int>{ 1, 2, 3, 4, 5, 6 });
	return 0;
}