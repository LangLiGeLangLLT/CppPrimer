#include <iostream>
#include "Sales_data.h"

int main()
{
	Book book;
	std::cout << "������������ơ��۸���������" << std::endl;
	std::cin >> book.name >> book.price >> book.sold;
	std::cout << "���ƣ�" << book.name << " �۸�" << book.price << " ��������" << book.sold << std::endl;
	return 0;
}