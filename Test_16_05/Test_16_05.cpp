#include <iostream>

using namespace std;

template <typename T, size_t N>
void myprint(const T(&arr)[N])
{
	for (const auto &item : arr)
		cout << item << " ";
	cout << endl;
}

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9 };
	myprint(a);
	return 0;
}