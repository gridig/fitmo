#include <iostream>
using namespace std;

/*
    Napisati funkciju 'isPrime' koja će za dati broj provjeriti je li riječ o prostom ili složenom
    broju
    Input: broj [int]
    Output: prost/slozen [bool]
*/

bool isPrime(int x) {
    if (x <= 1) return false;
    if (x == 2 || x == 3) return true;
    for(int i = 2; i < x/2; i++) {
        if (x % i == 0) return false;
    };
    return true;
}

int main() {
    int x = 0;
    cout << "Unesite broj: ";
    cin >> x;
    cout << "Broj je " << (isPrime(x) ? "prost" : "slozen");

    return 0;
}
