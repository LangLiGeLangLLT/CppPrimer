#include <iostream>
#include <string.h>

using namespace std;

int main(int agrc, char **argv)
{
	char temp[100];
	strcpy(temp, "prog");
	argv[0] = temp;
	cout << argv[0] << endl;
	strcpy(temp, "-d");
	argv[1] = temp;
	cout << argv[1] << endl;
	strcpy(temp, "-o");
	argv[2] = temp;
	cout << argv[2] << endl;
	strcpy(temp, "ofile");
	argv[3] = temp;
	cout << argv[3] << endl;
	strcpy(temp, "data0");
	argv[4] = temp;
	cout << argv[4] << endl;
	strcpy(temp, "0");
	argv[5] = temp;
	cout << argv[5] << endl;
	return 0;
}