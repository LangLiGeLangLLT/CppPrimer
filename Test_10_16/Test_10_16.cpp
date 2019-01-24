#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void biggies(vector<string> &words, vector<string>::size_type sz)
{
	//将words按字典序排序，删除重复单词
	sort(words.begin(), words.end());
	vector<string>::iterator end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());

	//按长度排序，长度相同的单词维持字典序
	stable_sort(words.begin(), words.end(),
		[](const string &a, const string &b) {return a.size() < b.size(); });

	//获取一个迭代器，指向第一个满足size()>=sz的元素
	vector<string>::iterator wc = find_if(words.begin(), words.end(),
		[sz](const string &a) {return a.size() >= sz; });

	//计算满足size>=sz的数目
	vector<string>::size_type count = words.end() - wc;
	cout << "有" << count << "个单词的长度大于等于" << sz << endl;

	//打印长度大于等于给定值的单词，每个单词后面接一个空格
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