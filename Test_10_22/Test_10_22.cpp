#include <iostream>
#include <functional>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
using namespace std::placeholders;

bool f(const string &s, string::size_type sz)
{
	return s.size() <= sz;
}

void Count(vector<string> words, vector<string>::size_type sz)
{
	cout << "����С�ڵ���6�ĵ�������Ϊ��";
	cout << count_if(words.begin(), words.end(), bind(f, _1, sz)) << endl;
}

int main()
{
	vector<string> words = { "apple","hello","banana","C++","world","aaaaaaaaaaaaa" };
	Count(words, 6);
	return 0;
}