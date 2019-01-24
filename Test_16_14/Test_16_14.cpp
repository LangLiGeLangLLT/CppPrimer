#include <iostream>

using namespace std;

template <unsigned H, unsigned W>
class Screen
{
public:
	Screen() = default;
	Screen(const Screen&) = default;
	Screen(Screen&&) = default;
	Screen& operator=(const Screen&) = default;
	Screen& operator=(Screen&&) = default;
	unsigned Height()const { return height; }
	unsigned Width()const { return width; }
	virtual ~Screen() = default;
private:
	unsigned height = H;
	unsigned width = W;
};

int main()
{
	Screen<10, 20> screen;
	cout << "¸ß£º" << screen.Height() << " ¿í£º" << screen.Width() << endl;
	return 0;
}