#include <iostream>
#include <vector>

using namespace std;

using PF = int(*)(int, int);

int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int divide(int x, int y)
{
	return x / y;
}

int main()
{
	vector<PF> v;
	int x = 4, y = 2;
	v.push_back(add);
	v.push_back(sub);
	v.push_back(mul);
	v.push_back(divide);

	for (int i = 0; i != v.size(); ++i)
		cout << (v[i])(x, y) << endl;
	return 0;
}