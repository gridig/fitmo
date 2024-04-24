// Napravite rekurzivnu funkciju ‘nthFibonacci' za raèunanje n - tog Fibonacci broja

#include <iostream>
using namespace std;

int nthFibonacci(int n);

int main()
{
    int n;

    do {
        cout << "Unesi broj ";
        cin >> n;
    } while (n < 1);


    cout << n << ". Fibonacci broj je " << nthFibonacci(n);
}

int nthFibonacci(int n) {
    if (n <= 2) return 1;
    return nthFibonacci(n - 1) + nthFibonacci(n - 2);
}
