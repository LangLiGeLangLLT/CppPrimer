#include <iostream>
#include <map>
#include <functional>
#include <string>

using namespace std;

int main()
{
	map<string, function<int(int, int)>> binops = {
		{"+",[](int i,int j)->int {return i + j; }},
		{"-",[](int i,int j)->int {return i - j; }},
		{"*",[](int i,int j)->int {return i * j; }},
		{"/",[](int i,int j)->int {return i / j; }}
	};
	cout << "输入运算符：";
	string s;
	cin >> s;
	cout << "输入两个整数：";
	int a, b;
	cin >> a >> b;
	cout << "结果为：" << binops[s](a, b) << endl;
	return 0;
}