#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string infile = "test.txt";
	ifstream in(infile);
	vector<string> v;
	if (in)
	{
		string buf;
		while (getline(in, buf))
		{
			v.push_back(buf);
		}
		for (vector<string>::iterator it = v.begin(); it != v.end(); ++it)
		{
			cout << *it << endl;
		}
	}
	else
	{
		cerr << "不能打开该文件：" << infile << endl;
	}
	return 0;
}