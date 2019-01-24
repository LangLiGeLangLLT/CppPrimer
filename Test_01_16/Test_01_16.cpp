#include <iostream>

int main()
{
	int value = 0, sum = 0;
	while (std::cin >> value)
		sum += value;
	std::cout << "这组数据的和是：" << sum << std::endl;
	return 0;
}