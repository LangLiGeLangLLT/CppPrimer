#include <iostream>
#include <string>

using namespace std;

class Book
{
	friend ostream &operator<<(ostream &, const Book &);

public:
	Book();
	~Book();
	Book(const string &, const double &);
	Book(const Book&);
	Book &operator=(const Book&);
	string Name()const { return this->name; }
	double Price()const { return this->price; }

private:
	string name;
	double price;
};

inline
ostream &operator<<(ostream &os, const Book &book)
{
	os << book.Name() << " " << book.Price();
	return os;
}

Book::Book()
{
	name = "无";
	price = 0;
}

Book::~Book() {}

Book::Book(const string &name, const double &price) :name(name), price(price) {}

Book::Book(const Book &book) : name(book.name), price(book.price) {}

Book &Book::operator=(const Book &book)
{
	name = book.name;
	price = book.price;
	return *this;
}

bool operator<(const Book &rbook, const Book &lbook)
{
	return rbook.Price() < lbook.Price();
}

bool operator>=(const Book &rbook, const Book &lbook)
{
	return !(rbook < lbook);
}

int main()
{
	Book book("西游记", 10);
	Book book1 = Book("水浒传", 20);
	Book book2 = Book("三国演义", 5);
	if (book < book1)
		cout << book << "小于" << book1 << endl;
	else
		cout << book << "大于" << book1 << endl;
	if (book1 < book2)
		cout << book1 << "小于" << book2 << endl;
	else
		cout << book1 << "大于" << book2 << endl;
	return 0;
}