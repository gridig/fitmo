#include <iostream>
using namespace std;

int main() {
    /*
        Napišite program za unos cijelog broja, a zatim ispisati sumu svih cifara tog broja.
        Input: broj [int]
        Output: Suma cifara unesenog broja
    */


    int broj;
    cout << "Unesite broj: ";
    cin >> broj;

    int sumaCifara = 0;
    int temp = broj;

    while (temp) {
        int cifra = temp % 10;
        sumaCifara += cifra;
        temp /= 10;
    }

    cout << "Suma cifara unesenog broja je: " << sumaCifara;

    return 0;
}
