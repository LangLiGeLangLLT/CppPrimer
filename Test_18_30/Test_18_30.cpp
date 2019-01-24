#include <iostream>

using namespace std;

class Class {};

class Base :public Class
{
public:
	Base() = default;
	Base(const Base&) = default;
	Base(int i) :ival(i), Class() {}
private:
	int ival;
};

class D1 :virtual public Base
{
public:
	D1() = default;
	D1(const D1 &d) :Base(d) {};
	D1(int i) :Base(i) {}
};

class D2 :virtual public Base
{
public:
	D2() = default;
	D2(const D2 &d) :Base(d) {};
	D2(int i) :Base(i) {}
};

class MI :public D1, public D2
{
public:
	MI() = default;
	MI(const MI& m) :Base(m), D1(m), D2(m) {}
	MI(int i) :Base(i), D1(i), D2(i) {}
};

class Final :public MI, public Class
{
public:
	Final() = default;
	Final(const Final &f) :Base(f), MI(f), Class() {}
	Final(int i) :Base(i), MI(i), Class() {}
};

int main()
{
	return 0;
}