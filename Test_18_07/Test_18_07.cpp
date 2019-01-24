#include <iostream>
#include <memory>
#include <list>
#include <vector>

using namespace std;

template <typename T>
class Blob
{
public:
	Blob(initializer_list<T> il);
private:
	shared_ptr<vector<T>> data;
};

template <typename T>
Blob<T>::Blob(initializer_list<T> il)
try :data(make_shared<vector<T>>(il)) {}
catch (const bad_alloc &e) {}

int main()
{
	return 0;
}