#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int number;
	vector<int> aggregate;
	int ranks = 0;
	unsigned i;
	cout << "������һ��������" << endl;
	while (cin >> number)
		aggregate.push_back(number);
	for (i = 0; i < aggregate.size() / 2; i += 2)
	{
		cout << "�� " << ranks + 1 << " �������ĺͣ�" << aggregate[i] + aggregate[i + 1] << endl;
		++ranks;
	}
	if (aggregate.size() % 2 != 0)
		cout << "�� " << ranks + 1 << " �������ĺͣ�" << aggregate[i] << endl;
	cout << "----------------" << endl;
	for (i = 0; i < aggregate.size() / 2; i++)
		cout << "�� " << i + 1 << " ���͵����� " << i + 1 << " ��Ԫ�صĺͣ�" << aggregate[i] + aggregate[aggregate.size() - i - 1] << endl;
	if (aggregate.size() % 2 != 0)
		cout << "�� " << i + 1 << " ��Ԫ���ǣ�" << aggregate[i] << endl;
	return 0;
}