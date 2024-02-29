#include <iostream>
using namespace std;

int main()
{
    int broj;
    broj = 10;
    int Broj = 2;
    float decimalni1 = 1.22222;
    double decimalni2 = 2.3383337638724786234;

    cout << "Cijeli brojevi: " << broj << ", " << Broj << endl;
//    cout.precision(15);
    cout << "Decimalni brojevi: " << decimalni1 << ", " << decimalni2 << endl;

    int a = 5;
    int b(10);
    int c{15};

    cout << "Vrijednost 'a': " << a << endl;
    cout << "Vrijednost 'b': " << b << endl;
    cout << "Vrijednost 'c': " << c << endl;

    char karakter1 = 'l';

    cout << "Karakter 1 je: " << karakter1 << endl;

    bool istina = true;
    bool laz(false);

    cout << "Bool je: " << istina << ", " << laz << endl;

    return 0;
}
