#include <iostream>

using namespace std;

template <typename T, size_t N>
T* begin(const T(&arr)[N])
{
	return arr;
}

template <typename T, size_t N>
T* end(const T(&arr)[N])
{
	return arr + N;
}

int main()
{
	int a[] = { 1,2,3,45,6 };
	cout << *begin(a) << endl;
	cout << *(end(a) - 1) << endl;
	return 0;
}