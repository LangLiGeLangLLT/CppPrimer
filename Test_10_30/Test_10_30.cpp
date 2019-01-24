#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	istream_iterator<int> in_iter(cin), eof;
	ostream_iterator<int> out_iter(cout, " ");
	vector<int> numbers(in_iter, eof);
	sort(numbers.begin(), numbers.end());
	copy(numbers.begin(), numbers.end(), out_iter);
	return 0;
}