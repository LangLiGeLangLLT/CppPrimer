#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s = "ab2c3d7R4E6";
	string numbers = "0123456789";
	string::size_type pos = 0;
	while ((pos = s.find_first_of(numbers, pos)) != string::npos)
	{
		cout << "找的索引为：" << pos << "的数字：" << s[pos] << endl;
		++pos;
	}
	pos = 0;
	while ((pos = s.find_first_not_of(numbers, pos)) != string::npos)
	{
		cout << "找到索引为：" << pos << "的字母：" << s[pos] << endl;
		++pos;
	}
	return 0;
}