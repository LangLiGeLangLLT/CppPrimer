#include <iostream>
#include <string>

using namespace std;

class Book
{
	friend istream &operator>>(istream&, Book&);
	friend ostream &operator<<(ostream&, const Book&);

public:
	Book();
	Book(const string&, const double&, const string&);
	~Book();

private:
	string name;
	double price;
	string author;
};

inline
istream &operator>>(istream &is, Book &book)
{
	is >> book.name >> book.price >> book.author;
	if (book.price < 0)
		book = Book();
	return is;
}

inline
ostream &operator<<(ostream &os, const Book &book)
{
	os << book.name << " " << book.price << " " << book.author;
	return os;
}

Book::Book()
{
	name = "无";
	price = 0;
	author = "无";
}

Book::Book(const string &name, const double &price, const string &author)
	:name(name), price(price), author(author)
{

}

Book::~Book()
{

}

int main()
{
	Book book;
	cout << "请输入图书的名称、价格、作者：";
	cin >> book;
	cout << "---------------" << endl;
	cout << book << endl;
	return 0;
}