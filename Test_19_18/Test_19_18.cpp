#include <iostream>
#include <functional>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	vector<string> v{ "","","hello","world" };
	cout << count_if(v.begin(), v.end(), mem_fn(&string::empty)) << endl;
	function<bool(const string&)> fcn = &string::empty;
	cout << count_if(v.begin(), v.end(), fcn) << endl;
	cout << count_if(v.begin(), v.end(), bind(&string::empty, placeholders::_1)) << endl;
	return 0;
}