#include <iostream>

using namespace std;

class X;
class Y;

class X
{
	Y *p;
};

class Y
{
	X object;
};

int main()
{
	return 0;
}