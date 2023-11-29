#include <iostream>
using namespace std;

void unos(int niz[], int velNiza);
bool jeRastuci(int niz[], int velNiza);

int main() {
    /*
    Zadatak 2:
    Napisati program koji provjerava da li je 1D niz rastući.
    Velicina niza je 5.
    */

    const int velNiza = 5;
    int niz[velNiza];

    unos(niz, velNiza);
    cout << (jeRastuci(niz, velNiza) ? "Rastuci" : "Nije rastuci");

    return 0;
}

void unos(int niz[], int velNiza) {
    cout << "Unesi elemente niza: " << endl;

    for (int i = 0; i < velNiza; ++i) {
        cin >> niz[i];
    }
}

bool jeRastuci(int niz[], int velNiza) {
    bool rastuci = true;

    for (int i = 0; i < velNiza - 1; ++i) {
        if(niz[i] > niz[i + 1]) {
            return false;
        }
    }

    return rastuci;
}