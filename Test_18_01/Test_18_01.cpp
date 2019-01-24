#include <iostream>

using namespace std;

int main()
{
	range_error r("error");
	exception *p = &r;
	throw *p;
	return 0;
}