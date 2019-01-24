#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string outfile = "test.txt";
	string s = "\nhello world Java";
	ofstream out;
	out.open(outfile, ofstream::app);
	if (out) {
		out << s;
	}
	out.close();
	return 0;
}