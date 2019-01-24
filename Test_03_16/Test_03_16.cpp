#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{ 10 };
	vector<int> v5{ 10, 42 };
	vector<string> v6{ 10 };
	vector<string> v7{ 10, "hi" };
	cout << v1.size() << endl;
	cout << v2.size() << endl;
	for (auto i : v2)
		cout << i;
	cout << endl;
	cout << v3.size() << endl;
	for (auto i : v3)
		cout << i;
	cout << endl;
	cout << v4.size() << endl;
	for (auto i : v4)
		cout << i;
	cout << endl;
	cout << v5.size() << endl;
	for (auto i : v5)
		cout << i;
	cout << endl;
	cout << v6.size() << endl;
	for (auto i : v6)
		cout << i;
	cout << endl;
	cout << v7.size() << endl;
	for (auto i : v7)
		cout << i;
	cout << endl;
	return 0;
}