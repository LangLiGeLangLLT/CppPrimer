#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class ReadString
{
public:
	ReadString(istream &is = cin) :is(is) {}
	void operator()(vector<string> &v) {
		while (is >> s)
			v.push_back(s);
	}
private:
	istream & is;
	string s;
};

int main()
{
	vector<string> v;
	ReadString reader;
	reader(v);
	for_each(v.begin(), v.end(), [](const string &s) {cout << s << endl; });
	return 0;
}