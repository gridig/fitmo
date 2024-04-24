#include <iostream>
using namespace std;

int main() {
    /*
    Napišite program koji omogućava unos mjeseca i godine, a zatim izračunava i ispisuje broj dana u
    tom mjesecu za unesenu godinu. Program će omogućiti unos mjeseca i godine. Prije nego što
    izračuna broj dana, provjerit će jesu li unesene vrijednosti valjane: godina mora biti veća od
    nule, a mjesec mora biti u rasponu od 1 do 12.
    Input: mjesec [int], godina [int]
    Output: Broj dana u mjesecu
    */

    int mjesec;
    int godina;

    cout << "Unesi mjesec: " << endl;
    cin >> mjesec;
    cout << "Unesi godinu: " << endl;
    cin >> godina;

    if ((godina <= 0) || (mjesec < 1) || (mjesec > 12)) {
        cout << "Niste unijeli validne podatke.";
        return 0;
    }

    bool jePrijestupna = (godina%4==0 && godina%100!=0) || (godina%400==0);

    cout << "Broj dana u " << mjesec << ". mjesecu " << godina << ". godine je: ";

    switch (mjesec) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: cout << 31 << endl;
            break;
        case 4: case 6: case 9: case 11: cout << 30 << endl;
            break;
        default: cout << (jePrijestupna ? 29 : 28) << endl;
    }

    return 0;
}
