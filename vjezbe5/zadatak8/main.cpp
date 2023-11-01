#include <iostream>
using namespace std;

int main() {
    /*
        Napišite program koji za uneseni cijeli broj ispisuje njegov broj cifara.
        Input: broj [int]
        Output: Broj cifara u unesenom broju
    */

    int broj;
    cout << "Unesite broj: ";
    cin >> broj;

//    int brojCifara = 0;
//    int temp = broj;
//
//    while(temp > 0) {
//        brojCifara++;
//        temp /= 10;
//    }
//
//    cout << "Broj cifara je: " << brojCifara;

    int brCifara = log10(broj) + 1;

    cout << "Broj cifara je: " << brCifara;

    return 0;
}
