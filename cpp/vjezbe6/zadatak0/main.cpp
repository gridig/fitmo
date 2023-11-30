#include <iostream>

using namespace std;

const int velicina = 10;

void unos(int[]);

void ispis(int[]);

void sortiranje(int[]);

int main() {
    int nizZaSortiranje[velicina];

    unos(nizZaSortiranje);
    ispis(nizZaSortiranje);
    sortiranje(nizZaSortiranje);

    return 0;
}

void unos(int niz[]) {
    for (int i = 0; i < velicina; i++) {
        //cin >> niz[i];
        niz[i] = rand() % 1000;
    };
};

void ispis(int niz[]) {
    for (int i = 0; i < velicina; i++) {
        cout << niz[i] << "\t";
    }
    cout << endl;
};

void sortiranje(int niz[]) {
    bool promjena = true;
    int dokle = velicina - 1;
    int brojac = 0;

    while(promjena) {
        brojac++;
        promjena = false;
        for (int i = 0; i < dokle; i++) {
            if (niz[i] > niz[i + 1]) {
                int privremeno = niz[i];
                niz[i] = niz[i + 1];
                niz[i + 1] = privremeno;
                promjena = true;
            }
        }
        dokle--;
        if (!promjena) {
            break;
        }
        ispis(niz);
    }
    cout << "Sortiranje uspjesno nakon " << brojac << " prolaza";
};