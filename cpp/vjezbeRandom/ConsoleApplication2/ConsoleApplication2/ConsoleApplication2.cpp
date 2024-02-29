#include <iostream>
using namespace std;

int nthFibonacci(int n);

int main()
{
    //Napravite rekurzivnu funkciju ‘nthFibonacci' za raèunanje n - tog Fibonacci broja

    int n;

    do {
        cout << "Unesi broj n: ";
        cin >> n;
    } while (n < 1);

    cout << nthFibonacci(n);
}

int nthFibonacci(int n) {
    if (n <= 2) return 1;
    return nthFibonacci(n - 1) + nthFibonacci(n - 2);
}