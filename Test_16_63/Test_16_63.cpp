#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

template <typename T>
int Count(const vector<T> &vec, const T val)
{
	return count(vec.begin(), vec.end(), val);
}

template <>
int Count(const vector<const char*> &vec, const char* val)
{
	return count(vec.begin(), vec.end(), val);
}

int main()
{
	vector<int> v = { 1,2,3,2,2,2 };
	cout << Count(v, 2) << endl;
	vector<const char*> v1 = { "abc","ab","abc","ad" };
	cout << Count(v1, "abc") << endl;
	return 0;
}