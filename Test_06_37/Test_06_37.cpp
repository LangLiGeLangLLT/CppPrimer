#include <iostream>
#include <string>

using namespace std;

using arrString = string[10];
arrString &f1();

auto f2()->string(&)[10];

string s[];
decltype(s) &f3();

int main()
{
	return 0;
}