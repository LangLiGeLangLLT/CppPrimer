#include <iostream>
#include <vector>

using namespace std;

class Example
{
public:
	static double rate;
	static const int vecSize;
	static vector<double> vec;
};

double Example::rate = 6.5;
const int vecSize = 20;
vector<double> vec(vecSize);

int main()
{
	return 0;
}