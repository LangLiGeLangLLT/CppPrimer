#include <iostream>
#include <vector>

using namespace std;

template <typename It, typename N>
auto Sum(It beg, It end, N sum)->decltype(sum)
{
	while (beg != end)
		sum += *beg++;
	return sum;
}

int main()
{
	vector<int> v = { 1, 2, 3, 4 };
	cout << Sum(v.begin(), v.end(), 0) << endl;
	return 0;
}