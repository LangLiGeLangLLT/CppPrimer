#include <iostream>
#include <random>
#include <cstddef>
#include <algorithm>
#include <ctime>

using namespace std;

int main()
{
	static default_random_engine e((unsigned)time(0));
	static uniform_int_distribution<unsigned> u(0, 9);
	vector<unsigned> ret;
	for (size_t i = 0; i < 10; ++i)
		ret.push_back(u(e));
	for_each(ret.begin(), ret.end(), [](const auto &i) {cout << i << endl; });
	return 0;
}