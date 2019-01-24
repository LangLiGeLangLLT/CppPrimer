#include <iostream>

using namespace std;

int main()
{
	cout << "ÇëÊäÈë³É¼¨£º";
	int grade = 0, finalgrade = 0;
	cin >> grade;
	if (grade >= 90)
		cout << "high pass" << endl;
	else if (grade >= 75 && grade < 90)
		cout << "pass" << endl;
	else if (grade >= 60 && grade < 75)
		cout << "low pass" << endl;
	else
		cout << "fail" << endl;
	cout << endl;
	return 0;
}