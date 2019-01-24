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
	name = "��";
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
	Book book("���μ�", 10);
	Book book1 = Book("ˮ䰴�", 20);
	Book book2 = Book("��������", 5);
	if (book < book1)
		cout << book << "С��" << book1 << endl;
	else
		cout << book << "����" << book1 << endl;
	if (book1 < book2)
		cout << book1 << "С��" << book2 << endl;
	else
		cout << book1 << "����" << book2 << endl;
	return 0;
}