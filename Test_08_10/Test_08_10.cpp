#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
	string infile = "test.txt";
	ifstream in(infile);
	vector<string> v;
	if (in) {
		string buf;
		while (getline(in, buf)) {
			v.push_back(buf);
		}
		for (vector<string>::iterator it = v.begin(); it != v.end(); ++it) {
			istringstream record(*it);
			string word;
			while (record >> word) {
				cout << word << endl;
			}
		}
	}
	else {
		cerr << "未能打开该文件：" << infile << endl;
	}
	return 0;
}