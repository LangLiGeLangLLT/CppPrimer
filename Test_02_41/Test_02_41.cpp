#include <iostream>
#include <string>

typedef struct Sales_data
{
	std::string name;
	double price;
	int sold;
}Book;

int main()
{
	Book book;
	std::cout << "������������ơ��۸���������" << std::endl;
	std::cin >> book.name >> book.price >> book.sold;
	std::cout << "���ƣ�" << book.name << " �۸�" << book.price << " ��������" << book.sold << std::endl;
	return 0;
}