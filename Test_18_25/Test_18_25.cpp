#include <iostream>

using namespace std;

class Base1
{
public:
	Base1() = default;
	virtual ~Base1() { cout << "Base1::~Base1()" << endl; }
	virtual void print() { cout << "Base1::print()" << endl; }
};

class Base2
{
public:
	Base2() = default;
	virtual ~Base2() { cout << "Base2::~Base2()" << endl; }
	virtual void print() { cout << "Base2::print()" << endl; }
};

class D1 :public Base1
{
public:
	D1() = default;
	virtual ~D1() { cout << "D1::~D1()" << endl; }
	void print() { cout << "D1::print()" << endl; }
};

class D2 :public Base2
{
public:
	D2() = default;
	virtual ~D2() { cout << "D2::~D2()" << endl; }
	void print() { cout << "D2::print()" << endl; }
};

class MI :public D1, public D2
{
public:
	MI() = default;
	virtual ~MI() { cout << "MI::~MI()" << endl; }
	void print() { cout << "MI::print()" << endl; }
};

int main()
{
	Base1 *pb1 = new MI;
	Base2 *pb2 = new MI;
	D1 *pd1 = new MI;
	D2 *pd2 = new MI;
	pb1->print(); cout << endl;
	pd1->print(); cout << endl;
	pd2->print(); cout << endl;
	delete pb2; cout << endl;
	delete pd1; cout << endl;
	delete pd2; cout << endl;
	return 0;
}