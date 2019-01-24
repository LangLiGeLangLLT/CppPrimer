#include <iostream>

using namespace std;

template <typename T>
ostream &print(ostream &os, const T &t)
{
	return os << t;
}

template <typename T, typename... Args>
ostream &print(ostream &os, const T &t, const Args&...rest)
{
	os << t << ", ";
	return print(os, rest...);
}

int main()
{
	print(cout, 42);
	cout << endl;
	print(cout, "a", 42);
	cout << endl;
	print(cout, "a", "b", "c", 1, 42);
	cout << endl;
	return 0;
}