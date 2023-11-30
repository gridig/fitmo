#include <iostream>
using namespace std;

int main() {
    /*
       Napišite program za unos cijelog broja. Nakon unosa, program će obrnuti taj broj i ispisati obrnuti broj na ekranu. Uzeti u obzir i negativne brojeve.
       Primjeri:
           4321 -> 1234
           -4321 -> -1234
           430 -> 34
           -1120 -> -211
       Input: cijeli broj [int]
       Output: obrnuti cijeli broj [int]
    */

    int broj;
    cout << "Unesite broj: ";
    cin >> broj;
    int obrnutiBroj = 0;
    int temp = abs(broj);

    while(temp) {
        int cifra = temp % 10;
        obrnutiBroj *= 10;
        obrnutiBroj += cifra;
        temp /= 10;
    }

    cout << "Obrnuti broj je: " << (broj < 0 ? (obrnutiBroj * -1) : obrnutiBroj);

    return 0;
}
