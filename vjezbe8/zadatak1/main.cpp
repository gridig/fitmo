#include <iostream>
using namespace std;

void unos(int niz[], int velNiza);
void ispis(int niz[], int velNiza);
int min(int niz[], int velNiza);
int max(int niz[], int velNiza);

int main() {
    const int velNiz1 = 5;
    const int velNiz2 = 6;
    int niz1[velNiz1];
    int niz2[velNiz2];

    unos(niz1, velNiz1);
    unos(niz2, velNiz2);

    ispis(niz1, velNiz1);
    ispis(niz2, velNiz2);

    cout << "Najveci element niz1: " << max(niz1, velNiz1) << endl;
    cout << "Najmanji element niz1: " << min(niz1, velNiz1) << endl;
    cout << "Najveci element niz2: " << max(niz2, velNiz2) << endl;
    cout << "Najmanji element niz2: " << min(niz2, velNiz2) << endl;

    return 0;
}

void unos(int niz[], int velNiza) {
    for (int i = 0; i < velNiza; i++) {
        cout << "Unesite element na indexu: " << i << endl;
        cin >> niz[i];
    }
}

void ispis(int niz[], int velNiza) {
    cout << "Niz ima elemente ";
    for (int i = 0; i < velNiza; i++) {
        cout << niz[i] << " ";
    }
    cout << endl;
}

int min(int niz[], int velNiza) {
    int najmanji = niz[0];
    for (int i = 0; i < velNiza; i++) {
        if(najmanji > niz[i]) {
            najmanji = niz[i];
        }
    }
    return najmanji;
}

int max(int niz[], int velNiza) {
    int najveci = niz[0];
    for (int i = 0; i < velNiza; i++) {
        if(najveci < niz[i]) {
            najveci = niz[i];
        }
    }
    return najveci;
}