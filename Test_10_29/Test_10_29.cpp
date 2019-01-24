#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	ifstream file = ifstream("Text.txt");
	istream_iterator<string> iter(file), eof;
	ostream_iterator<string> out(cout);
	vector<string> v(iter, eof);
	copy(v.begin(), v.end(), out);
	return 0;
}