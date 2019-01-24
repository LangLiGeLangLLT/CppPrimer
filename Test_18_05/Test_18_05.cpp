#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	try {

	}
	catch (const range_error &e) {
		cout << e.what() << endl;
		abort();
	}
	catch (const underflow_error &e) {
		cout << e.what() << endl;
		abort();
	}
	catch (const overflow_error &e) {
		cout << e.what() << endl;
		abort();
	}
	catch (const runtime_error &e) {
		cout << e.what() << endl;
		abort();
	}
	catch (const length_error &e) {
		cout << e.what() << endl;
		abort();
	}
	catch (const out_of_range &e) {
		cout << e.what() << endl;
		abort();
	}
	catch (const invalid_argument &e) {
		cout << e.what() << endl;
		abort();
	}
	catch (const domain_error &e) {
		cout << e.what() << endl;
		abort();
	}
	catch (const logic_error &e) {
		cout << e.what() << endl;
		abort();
	}
	catch (const bad_cast &e) {
		cout << e.what() << endl;
		abort();
	}
	catch (const bad_alloc &e) {
		cout << e.what() << endl;
		abort();
	}
	catch (const exception &e) {
		cout << e.what() << endl;
		abort();
	}
	return 0;
}