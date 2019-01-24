#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	ifstream in_file = ifstream("in_file.txt");
	ofstream out_file1 = ofstream("out_file1.txt");
	ofstream out_file2 = ofstream("out_file2.txt");
	istream_iterator<int> in_iter(in_file), eof;
	ostream_iterator<int> out_iter1(out_file1, " ");
	ostream_iterator<int> out_iter2(out_file2, " ");
	while (in_iter != eof)
	{
		if (*in_iter % 2 == 0)
			out_iter2 = *in_iter++;
		else
			out_iter1 = *in_iter++;
	}
	return 0;
}