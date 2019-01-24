#include <iostream>
#include <string>

using namespace std;

class Book
{
	friend ostream &operator<<(ostream&, const Book&);

public:
	Book();
	Book(const string&, const string&, const string&);
	~Book();

private:
	string name;
	string id;
	string author;
};

ostream &operator<<(ostream &os, const Book &book)
{
	os << book.name << " " << book.id << " " << book.author;
	return os;
}

void print(const Book &book)
{
	cout << book << endl;
}

Book::Book()
{
	name = "��";
	id = "��";
	author = "��";
}

Book::Book(const string &name, const string &id, const string &author)
	:name(name), id(id), author(author)
{

}

Book::~Book()
{

}

int main()
{
	print(Book("���μ�", "ISBN-994654", "��ж�"));
	print(Book());
	return 0;
}