#include <iostream>
using namespace std;

int main() {
    int broj1 = 10;
    int &referenca = broj1;

    cout << broj1 << endl;
    cout << referenca << endl;
    referenca++;
    cout << broj1 << endl;

    int x = 55;
    int y = 22;
    int &r = x;

    cout << "Memorijska adresa 'x': " << &x << endl; // address of operator
    cout << "Varijabla 'x': " << x << endl;
    cout << "Memorijska adresa 'y': " << &y << endl;
    cout << "Varijabla 'y': " << y << endl;
    cout << "Memorijska adresa 'r': " << &r << endl;
    cout << "Varijabla 'r': " << r << endl;

    return 0;
}
