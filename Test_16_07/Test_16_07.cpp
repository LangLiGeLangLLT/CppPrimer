#include <iostream>
#include <cstddef>

using namespace std;

template <typename T, size_t N> constexpr
size_t mysize(const T(&arr)[N])
{
	return N;
}

int main()
{
	int a[] = { 1,2,3 };
	cout << mysize(a) << endl;
	return 0;
}