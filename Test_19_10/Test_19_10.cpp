#include <iostream>
#include <typeinfo>

using namespace std;

class A {};

class B :public A {};

class C :public B {};

int main()
{
	A *pa = new C;
	cout << typeid(pa).name() << endl;
	cout << endl;
	C cobj;
	A &ra = cobj;
	cout << typeid(&ra).name() << endl;
	cout << endl;
	B *px = new B;
	A &ra1 = *px;
	cout << typeid(ra1).name() << endl;
	cout << endl;
	return 0;
}