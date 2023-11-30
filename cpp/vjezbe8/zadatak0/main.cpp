#include <iostream>
using namespace std;

int main() {
    const int velicinaNiza = 5;
    int niz[velicinaNiza];
    cout << "Broj elemenata u nizu je " << size(niz) << endl;

    for (int i = 0; i < velicinaNiza; i++) {
        cout << "Unesite element 'char' na indexu " << i << endl;
        cin >> niz[i];
    }

    cout << "Svi elemenati niza: ";

    for (int i = 0; i < velicinaNiza; ++i) {
        cout << "Index:" << i << endl;
        cout << "Vrijednost:" << niz[i] << endl;
        cout << "Adresa:" << &niz[i] << endl;
    }

    return 0;
}
