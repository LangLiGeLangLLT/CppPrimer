#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	string s = "hello world C++";
	istringstream record(s);
	cout << record.str() << endl;
	return 0;
}