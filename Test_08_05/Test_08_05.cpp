#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string infile = "test.txt";
	vector<string> v;
	ifstream in(infile);
	if (in) {
		string c;
		while (in >> c) {
			v.push_back(c);
		}
		for (vector<string>::iterator it = v.begin(); it != v.end(); ++it) {
			cout << *it << endl;
		}
	}
	else {
		cerr << "未能打开该文件：" << infile << endl;
	}
	return 0;
}