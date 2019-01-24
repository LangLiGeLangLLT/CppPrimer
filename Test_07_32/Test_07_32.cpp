#include <iostream>
#include <string>

using namespace std;

void clear();

class Screen
{
	friend void clear() {};
public:
	Screen()
	{
		clear();
	}
};

class Window_mgr
{
public:
	void clear();
};

void clear();

int main()
{
	return 0;
}