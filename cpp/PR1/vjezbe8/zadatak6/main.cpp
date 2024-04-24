#include <iostream>
#include<iomanip>
#include<time.h>
using namespace std;

const int MAX_REDOVA = 50;
const int MAX_KOLONA = 50;

void popuni(int niz[][MAX_KOLONA], int redovi, int kolona);
void ispis(int niz[][MAX_KOLONA], int redovi, int kolona);
void printAverageGradesPerStudent(int ocjene[][MAX_KOLONA], int brojStudenata, int brojPredmeta);

int main() {
    /*
    Napisati program koji izračunava prosjek ocjena za svakog studenta u 2D nizu i prosjek svakog predmeta po studentu u 2D nizu [proizvoljnih dimenzija]
    Studenti su rasporedjeni po redovima, a predmeti po kolonama.
    Program treba da ispiše prosjek svakog studenta ponaosob.
    Matricu ocjena popuniti slucajnim vrijednostima [5-10].
    Ukoliko je ocjena = 5, ne racunati prosjek za istu [jer se vodimo logikom da ocjena 5 oznacava da student nije polozio dati predmet].
    */

    srand(time(0));
    int red = 0;
    int kolona = 0;
    int niz[MAX_REDOVA][MAX_KOLONA];
    do {
        cout << "Unesite broj studenata: " << endl;
        cin >> red;
        cout << "Unesite broj predmeta: " << endl;
        cin >> kolona;
    }
    while ((red < 0 || red > MAX_REDOVA) || (kolona < 0 || kolona > MAX_KOLONA));
    popuni(niz, red, kolona);
    ispis(niz, red, kolona);
    printAverageGradesPerStudent(niz, red, kolona);

    return 0;
}

void popuni(int niz[][MAX_KOLONA], int redovi, int kolona) {
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolona; j++) {
            niz[i][j] = rand() % (10 - 5 + 1) + 5;
        }
    }
}

void ispis(int niz[][MAX_KOLONA], int redovi, int kolona) {
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolona; j++) {
            cout << setw(4) << niz[i][j];
        }
        cout << endl;
    }
}

void printAverageGradesPerStudent(int ocjene[][MAX_KOLONA], int brojStudenata, int brojPredmeta) {
    for (int i = 0; i < brojStudenata; i++) {
        float suma = 0.0f;
        int brojPolozenihPredmeta = 0;
        for (int j = 0; j < brojPredmeta; j++) {
            if (ocjene[i][j] > 5) {
                suma += ocjene[i][j];
                brojPolozenihPredmeta++;
            }
        }
        cout << "Prosjek ocjena za studenta pod rednim brojem " << i + 1 << " je: "
             << suma / brojPolozenihPredmeta << ", a student je polozio " << brojPolozenihPredmeta
             << " predmeta." << endl;
    }
}