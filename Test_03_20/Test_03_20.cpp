#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int number;
	vector<int> aggregate;
	int ranks = 0;
	unsigned i;
	cout << "请输入一组整数：" << endl;
	while (cin >> number)
		aggregate.push_back(number);
	for (i = 0; i < aggregate.size() / 2; i += 2)
	{
		cout << "第 " << ranks + 1 << " 对整数的和：" << aggregate[i] + aggregate[i + 1] << endl;
		++ranks;
	}
	if (aggregate.size() % 2 != 0)
		cout << "第 " << ranks + 1 << " 对整数的和：" << aggregate[i] << endl;
	cout << "----------------" << endl;
	for (i = 0; i < aggregate.size() / 2; i++)
		cout << "第 " << i + 1 << " 个和倒数第 " << i + 1 << " 个元素的和：" << aggregate[i] + aggregate[aggregate.size() - i - 1] << endl;
	if (aggregate.size() % 2 != 0)
		cout << "第 " << i + 1 << " 个元素是：" << aggregate[i] << endl;
	return 0;
}