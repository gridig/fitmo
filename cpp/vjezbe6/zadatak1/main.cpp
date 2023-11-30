#include <iostream>
using namespace std;

int zbir(int a, int b); // prototip funkcije
int x = 1; // globalna varijabla

int main() {
    int broj1, broj2;
    int x = 7; // lokalna varijabla
    cout << "Unesite prvi broj: ";
    cin >> broj1;
    cout << "Unesite drugi broj: ";
    cin >> broj2;
    cout << "Zbir: " << zbir(broj1, broj2) << "\n";
    cout << "Vrijednost varijable x: " << x;
    return 0;
}

int zbir(int a, int b) {
    int rezultat;
    rezultat = a + b;
    return rezultat;
}