#include <iostream>

int main()
{
	int value = 0, sum = 0;
	while (std::cin >> value)
		sum += value;
	std::cout << "�������ݵĺ��ǣ�" << sum << std::endl;
	return 0;
}