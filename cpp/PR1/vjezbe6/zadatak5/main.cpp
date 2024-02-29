#include <iostream>
using namespace std;

/*
    Napisati funkciju 'printPrimesLessThan' koja će ispisati sve proste brojeve manje od cijelog broja 'x'
    Input: x [int]
    Output: prosti brojevi manji od x
*/

bool isPrime(int x) {
    if (x <= 1) return false;
    if (x == 2 || x == 3) return true;
    for(int i = 2; i <= x/2; i++) {
        if (x % i == 0) return false;
    };
    return true;
}

void printPrimesLessThan(int x) {
    for(int i = 2; i < x; i++) {
        if(isPrime(i)) cout << i << " ";
    }
}

int main() {
    int x = 0;
    cout << "Unesite broj: ";
    cin >> x;
    printPrimesLessThan(x);

    return 0;
}
