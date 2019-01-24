#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
	Employee();
	Employee(string name);
	Employee& operator=(const Employee&) = delete;
	string Name() { return this->name; }
	int Id() { return this->id; }
private:
	string name;
	int id;
	static int num;
};

int Employee::num = 0;

Employee::Employee()
{
	id = ++num;
}

Employee::Employee(string name) :name(name)
{
	id = ++num;
}

void print(Employee person)
{
	cout << person.Name() << " " << person.Id() << endl;
}

int main()
{
	Employee p1("Ð¡Ã÷");
	Employee p2("Ð¡ºì");
	print(p1);
	print(p2);
	return 0;
}