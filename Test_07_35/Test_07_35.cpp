#include <iostream>

using namespace std;

typedef string Type;

Type initVal();

class Exercise
{
public:
	typedef double Type;
	Type setVal(Type);
	Type initVal();
private:
	int val;
};

Exercise::Type Exercise::setVal(Type parm)
{
	val = parm + initVal();
	return val;
}

int main()
{
	return 0;
}