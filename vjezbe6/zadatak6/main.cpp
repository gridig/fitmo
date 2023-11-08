#include <iostream>
using namespace std;

/*
    Napisati funkciju 'printPrimesBetween' koja će ispisati sve proste brojeve izmedju brojeva 'x' i
    'y'.
    Napomena: Mora biti zadovoljeno svojstvo 0 < x <= y prilikom korisnickog unosa.
    Input: x [int], y [int]
    Output: prosti brojevi izmedju 'x' i 'y'.
*/

bool isPrime(int x) {
    if (x <= 1) return false;
    if (x == 2 || x == 3) return true;
    for(int i = 2; i <= x/2; i++) {
        if (x % i == 0) return false;
    };
    return true;
}

void printPrimesBetween(int x, int y) {
    for(int i = x; i < y; i++) {
        if(isPrime(i)) cout << i << " ";
    }
}

int main() {
    int x = 0;
    int y = 0;
    cout << "Unesite broj x: ";
    cin >> x;
    cout << "Unesite broj y: ";
    cin >> y;
    printPrimesBetween(x, y);

    return 0;
}
