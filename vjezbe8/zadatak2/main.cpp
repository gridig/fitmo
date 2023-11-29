#include <iostream>
using namespace std;

void unos(int niz[], int velNiza);
void ispis(int niz[], int velNiza);
int getMostSimilar(int niz[], int velNiza, int trazeni);

int main() {
    /*
    Napisati program u kojem je potrebno unijeti 5 elemenata niza. Zatim, korisnik treba da unese
    jednu vrijednost, nakon cega ce se ispisati vrijednost niza koja je najslicnija unesenoj
    vrijednosti.
    Napomena: Mozete koristiti funkcije 'unos' i 'ispis'.
    */
    const int velNiza = 5;
    int niz[velNiza];
    int trazeni;

    unos(niz, velNiza);
    ispis(niz, velNiza);

    cout << "Unesite trazeni broj: " << endl;
    cin >> trazeni;
    cout << "Najblizi broj trazenom u nizu je: " << getMostSimilar(niz, velNiza, trazeni);

    return 0;
}

void unos(int niz[], int velNiza) {
    for (int i = 0; i < velNiza; ++i) {
        cout << "Unesite element sa indexom " << i << ": ";
        cin >> niz[i];
    }
};

void ispis(int niz[], int velNiza) {
    for (int i = 0; i < velNiza; ++i) {
        cout << niz[i] << " ";
    }
    cout << endl;
};

int getMostSimilar(int niz[], int velNiza, int trazeni) {
    int rezultat = niz[0];
    int razlika = abs(niz[0] - trazeni);

    for (int i = 0; i < velNiza; ++i) {
        if(razlika > abs(niz[i] - trazeni)) {
            razlika = abs(niz[i] - trazeni);
            rezultat = niz[i];
        }

    }
    return rezultat;
};