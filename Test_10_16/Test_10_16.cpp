#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void biggies(vector<string> &words, vector<string>::size_type sz)
{
	//��words���ֵ�������ɾ���ظ�����
	sort(words.begin(), words.end());
	vector<string>::iterator end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());

	//���������򣬳�����ͬ�ĵ���ά���ֵ���
	stable_sort(words.begin(), words.end(),
		[](const string &a, const string &b) {return a.size() < b.size(); });

	//��ȡһ����������ָ���һ������size()>=sz��Ԫ��
	vector<string>::iterator wc = find_if(words.begin(), words.end(),
		[sz](const string &a) {return a.size() >= sz; });

	//��������size>=sz����Ŀ
	vector<string>::size_type count = words.end() - wc;
	cout << "��" << count << "�����ʵĳ��ȴ��ڵ���" << sz << endl;

	//��ӡ���ȴ��ڵ��ڸ���ֵ�ĵ��ʣ�ÿ�����ʺ����һ���ո�
	for_each(wc, words.end(),
		[](const string &s) {cout << s << " "; });
	cout << endl;
}

int main()
{
	vector<string> words = { "apple","banana","pear","hello","add","sum" };
	biggies(words, 5);
	return 0;
}