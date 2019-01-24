#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	double sum = 0;
	vector<string> v;
	for (int i = 1; i <= 9; ++i)
		v.push_back(to_string(i));
	for (string num : v)
		sum += stod(num);
	cout << sum << endl;
	return 0;
}