#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;
using namespace std::placeholders;

bool f(const int &num, int sz)
{
	return num > sz;
}

void find(vector<int> v, string::size_type sz)
{
	cout << *find_if(v.begin(), v.end(), bind(f, _1, sz)) << endl;
}

int main()
{
	string s = "hello world Java C++ C# C Python";
	vector<int> v = { 10,200,30,10,20 };
	find(v, s.size());
	return 0;
}