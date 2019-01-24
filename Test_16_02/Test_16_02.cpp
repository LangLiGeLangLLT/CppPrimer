#include <iostream>
#include <functional>

using namespace std;

//template<typename T>
//int compare(const T &v1, const T &v2)
//{
//	if (v1 < v2)return -1;
//	if (v1 > v2)return 1;
//	return 0;
//}

template<typename T>
int compare(const T &v1, const T &v2)
{
	if (less<T>()(v1, v2)) return -1;
	if (less<T>()(v1, v2)) return 1;
	return 0;
}

int main()
{
	cout << compare(1, 3) << endl;
	return 0;
}