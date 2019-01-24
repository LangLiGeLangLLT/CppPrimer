#include <iostream>
#include <string>

using namespace std;

class Screen
{
public:
	using pos = string::size_type;
	Screen() = default;
	Screen(pos ht, pos wd) :height(ht), width(wd), contents(ht * wd, ' ') {}
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht * wd, c) {}
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
};

int main()
{
	return 0;
}