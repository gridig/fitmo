#include <iostream>
using namespace std;

int nthFibonacci(int n);

int main() {
//    Napravite rekurzivnu funkciju ‘nthFibonacci' za računanje n - tog Fibonacci broja.

    int n;
    do {
        cout << "Unesite 'n': " << endl;
        cin >> n;
    } while (n < 1);
    cout << "Odgovarajuci Fibonaccijev broj je " << nthFibonacci(n) << endl;
    return 0;
}

int nthFibonacci(int n) {
    if(n <= 2) return 1;
    return nthFibonacci(n-1) + nthFibonacci(n-2);
}