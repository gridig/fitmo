#include <iostream>
using namespace std;

int main() {
    int b = 55;

    int* p = &b;

    int** pp = &p;

    cout << "Adresa `p`: " << &p << endl;
    cout << "Vrijednost `p`: " << p << endl;
    cout << "Dereferencirana vrijednost `p`: " << *p << endl;
    cout << "Adresa `pp`: " << &pp << endl;
    cout << "Vrijednost `pp`: " << pp << endl;
    cout << "Dereferencirana vrijednost `pp`: " << *pp << endl;
    cout << "Dvostruko dereferencirana vrijednost `pp`: " << **pp << endl;

    return 0;
}
