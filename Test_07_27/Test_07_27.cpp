#include <iostream>
#include <string>

using namespace std;

class Screen
{
public:
	using pos = string::size_type;
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht * wd, c) {}
	Screen &move(pos r, pos c);
	Screen &set(char ch);
	Screen &display(ostream &os)
	{
		do_display(os);
		return *this;
	}
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
	void do_display(ostream &os)const
	{
		os << contents;
	}
};

inline Screen &Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}
inline Screen &Screen::set(char ch)
{
	contents[cursor] = ch;
	return *this;
}
int main()
{
	Screen myScreen(5, 5, 'x');
	myScreen.move(4, 0).set('#').display(cout);
	cout << endl;
	myScreen.display(cout);
	cout << endl;
	return 0;
}