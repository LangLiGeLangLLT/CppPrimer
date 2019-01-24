#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main()
{
	list<int> List = { 0,1,2,3,4,5,6,7,8,9 };
	deque<int> EvenNumberDeque;
	deque<int> OddNumberDeque;
	for (list<int>::const_iterator it = List.cbegin(); it != List.cend(); ++it)
	{
		if (*it % 2 == 0)
			EvenNumberDeque.push_back(*it);
		else
			OddNumberDeque.push_back(*it);
	}
	cout << "偶数双端队列：";
	for (deque<int>::const_iterator it = EvenNumberDeque.cbegin(); it != EvenNumberDeque.cend(); ++it)
		cout << *it << " ";
	cout << endl;
	cout << "奇数双端队列：";
	for (deque<int>::const_iterator it = OddNumberDeque.cbegin(); it != OddNumberDeque.cend(); ++it)
		cout << *it << " ";
	cout << endl;
}