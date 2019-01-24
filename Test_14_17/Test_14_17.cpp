#include <iostream>
#include <string>

using namespace std;

class Book
{
	friend ostream &operator<<(ostream &, const Book &);

public:
	Book();
	~Book();
	Book(const string &, const int &, const string &);
	string Name()const { return this->name; }
	int Price()const { return this->price; }
	string Author()const { return this->author; }

private:
	string name;
	int price;
	string author;
};

inline
ostream &operator<<(ostream &os, const Book &book)
{
	os << book.name << " " << book.price << " " << book.author;
	return os;
}

bool operator==(const Book &book1, const Book &book2)
{
	return book1.Name() == book2.Name() && book1.Price() == book2.Price() && book1.Author() == book2.Author();
}

bool operator!=(const Book &book1, const Book &book2)
{
	return !(book1 == book2);
}

Book::Book()
{
	name = "无";
	price = 0;
	author = "无";
}

Book::~Book()
{

}

Book::Book(const string &name, const int &price, const string & author)
	:name(name), price(price), author(author)
{

}

int main()
{
	Book book1("西游记", 10, "吴承恩");
	Book book2("史记", 10, "司马迁");
	Book book3("西游记", 10, "吴承恩");
	if (book1 == book2)
		cout << book1 << "与" << book2 << "相等" << endl;
	else
		cout << book1 << "与" << book2 << "不等" << endl;
	if (book1 == book3)
		cout << book1 << "与" << book3 << "相等" << endl;
	else
		cout << book1 << "与" << book3 << "不等" << endl;
	return 0;
}