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
	name = "��";
	price = 0;
	author = "��";
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
	Book book1("���μ�", 10, "��ж�");
	Book book2("ʷ��", 10, "˾��Ǩ");
	Book book3("���μ�", 10, "��ж�");
	if (book1 == book2)
		cout << book1 << "��" << book2 << "���" << endl;
	else
		cout << book1 << "��" << book2 << "����" << endl;
	if (book1 == book3)
		cout << book1 << "��" << book3 << "���" << endl;
	else
		cout << book1 << "��" << book3 << "����" << endl;
	return 0;
}