#include <iostream>
using namespace std;

int main() {
	int a = 55;
	int* p = &a;

	cout << "Pointer: " << p << endl;
	cout << ++(*p) << endl;
	cout << --(*p) << endl;
	cout << (*p) + 1 << endl;

	return 0;
}