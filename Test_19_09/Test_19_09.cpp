#include <iostream>
#include <typeinfo>
#include <vector>

using namespace std;

int main()
{
	int arr[10];
	vector<int>::iterator it;
	cout << typeid(42).name() << endl;
	cout << typeid(arr).name() << endl;
	cout << typeid(it).name() << endl;
	return 0;
}