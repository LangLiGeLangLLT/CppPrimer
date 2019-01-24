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
	cout << "�����������";
	string s;
	cin >> s;
	cout << "��������������";
	int a, b;
	cin >> a >> b;
	cout << "���Ϊ��" << binops[s](a, b) << endl;
	return 0;
}