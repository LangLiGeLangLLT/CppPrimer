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
	std::cout << "请输入书的名称、价格、销售量：" << std::endl;
	std::cin >> book.name >> book.price >> book.sold;
	std::cout << "名称：" << book.name << " 价格：" << book.price << " 销售量：" << book.sold << std::endl;
	return 0;
}