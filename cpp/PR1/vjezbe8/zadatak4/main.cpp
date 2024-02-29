#include <iostream>

using namespace std;

void unos(int niz[], int velNiza);
void ispis(int niz[], int velNiza);
bool isPalindrom(int niz[], int velNiza);
bool isArithmetic(int niz[], int velNiza);


int main() {
    /*
    Napisati program koji provjerava da li je 1D niz palindrom.
    [Main funkcija] Kreirati dva niza od kojih ce jedan biti dimenzija 5 a drugi 6.
    Testirati funkciju za provjeru palindroma na oba niza.
    */

    /*
    Napisati program koji provjerava da li je uneseni niz (velicine 5) - aritmeticki niz.
    Primjeri aritmetickih nizova:

    1,2,3,4,5, ...
    1,3,5,7,9, ...
    10,20,30,40,50,...
    11,22,33,44,55,...
    */

    const int velNiza = 5;
    const int velNiza2 = 6;
    int niz[velNiza];
    int niz2[velNiza2];

    unos(niz, velNiza);
    ispis(niz, velNiza);
    unos(niz2, velNiza2);
    ispis(niz2, velNiza2);

    cout << "Niz 1 " << (isPalindrom(niz, velNiza) ? "jest palindrom" : "nije palindrom") << endl;
    cout << "Niz 2 " << (isPalindrom(niz2, velNiza2) ? "jest palindrom" : "nije palindrom") << endl;
    cout << "Niz 1 " << (isArithmetic(niz, velNiza) ? "jest aritmeticki" : "nije aritmeticki") << endl;
    cout << "Niz 2 " << (isArithmetic(niz2, velNiza2) ? "jest aritmeticki" : "nije aritmeticki") << endl;

    return 0;
}

void unos(int niz[], int velNiza) {
    for (int i = 0; i < velNiza; i++) {
        cout << "Unesite element na indexu: " << i << endl;
        cin >> niz[i];
    }
}

void ispis(int niz[], int velNiza) {
    cout << "Niz ima iduce elemente: " << endl;
    for (int i = 0; i < velNiza; i++) { cout << niz[i] << endl; }
}

bool isPalindrom(int niz[], int velNiza) {
    for (int i = 0; i < velNiza / 2; i++) {
        if (niz[i] != niz[velNiza - 1 - i])return false;
    }
    return true;
}

bool isArithmetic(int niz[], int velNiza) {
    int razlika = niz[1] - niz[0];

    for (int i = 1; i < velNiza; ++i) {
        if(niz[i] - niz[i - 1] != razlika) return false;
    }

    return true;
}