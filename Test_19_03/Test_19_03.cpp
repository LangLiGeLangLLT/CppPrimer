#include <iostream>

using namespace std;

class A
{
public:
	A() { cout << "A()" << endl; }
	virtual ~A() { cout << "~A()" << endl; }
};

class B :public A
{
public:
	B() { cout << "B()" << endl; }
	virtual ~B() { cout << "~B()" << endl; }
};

class C :public B
{
public:
	C() { cout << "C()" << endl; }
	virtual ~C() { cout << "~C()" << endl; }
};

class D :public B, public A
{
public:
	D() { cout << "D()" << endl; }
	virtual ~D() { cout << "~D()" << endl; }
};

int main()
{
	A *pa = new C;
	if (B *pb = dynamic_cast<B*>(pa))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	cout << endl;
	B *pb = new B;
	if (C *pc = dynamic_cast<C*>(pb))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	cout << endl;
	A *pa1 = new D;
	if (B *pb = dynamic_cast<B*>(pa1))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	cout << endl;
	return 0;
}