#include <iostream>

int main()
{
	std::cout << "请输入两个整数：" << std::endl;
	int v1 = 0, v2 = 0, temp = 0;
	std::cin >> v1 >> v2;
	if (v1 > v2)
	{
		temp = v1;
		v1 = v2;
		v2 = temp;
	}
	std::cout << v1 << " 和 " << v2 << " 之间的整数：" << std::endl;
	while (v1 <= v2)
	{
		std::cout << v1 << " ";
		++v1;
	}
	std::cout << std::endl;
	return 0;
}