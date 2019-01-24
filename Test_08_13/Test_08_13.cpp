#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;

struct PersonInfo {
	string name;
	vector<string> phones;
};

bool valid(string nums) {
	return true;
}

int main() {
	string infile = "test.txt";
	ifstream in(infile);
	string line, word;
	istringstream record;
	vector<PersonInfo> people;
	if (in) {
		while (getline(in, line)) {
			PersonInfo info;
			record.clear();
			record.str(line);
			record >> info.name;
			while (record >> word) {
				info.phones.push_back(word);
			}
			people.push_back(info);
		}
	}
	ostringstream os;
	for (const auto &entry : people) {
		ostringstream formatted, badNums;
		for (const auto &nums : entry.phones) {
			if (!valid(nums))
				badNums << " " << nums;
			else
				formatted << " " << nums;
		}
		if (badNums.str().empty())
			os << entry.name << " " << formatted.str() << endl;
		else
			cerr << "ÊäÈë´íÎó£º" << entry.name << " ºÅÂë´íÎó£º" << badNums.str() << endl;
	}
	cout << os.str() << endl;
	return 0;
}