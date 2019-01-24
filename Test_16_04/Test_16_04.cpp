#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

template <typename T, typename U>
int find1(const T &begin, const T &end, const U &v)
{
	for (T it = begin; it != end; ++it)
	{
		if (*it == v)
			return 1;
	}
	return 0;
}

int main()
{
	vector<int> v = { 1,2,3,4,5 };
	cout << find1(v.begin(), v.end(), 4) << endl;
	list<string> l = { "hello","world","C++" };
	cout << find1(l.begin(), l.end(), "Java") << endl;
	return 0;
}