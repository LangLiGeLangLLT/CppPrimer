#include <iostream>
#include <string>

using namespace std;

class ReadString
{
public:
	ReadString(istream &i = cin) :is(i) {}
	string operator()() {
		is >> s;
		if (s.size() != 0)
		{
			cout << s << endl;
			return s;
		}
		return string();
	}
private:
	istream & is;
	string s;
};

class PrintString
{
public:
	PrintString(ostream &o = cout, char c = ' ') :os(o), sep(c) {}
	void operator()(const string &s)const { os << s << sep; }
private:
	ostream & os;
	char sep;
};

int main()
{
	string s = "hello world C++";
	PrintString printer;
	printer(s);
	cout << "\n-----------------" << endl;
	PrintString errors(cerr, '\n');
	errors(s);

	cout << "----------------------" << endl;
	ReadString reader;
	reader();
	return 0;
}