//Napišite rekurzivnu funkciju 'isPrime', koja provjerava da li je dati broj prost.

#include <iostream>
using namespace std;

bool isPrime(int n, int i = 2);

int main()
{
    int n;

    do {
        cout << "Unesi pozitivan cijeli broj ";
        cin >> n;
    } while (n < 1);


    cout << "Broj " << n << (isPrime(n) ? " je prost" : " nije prost");
}

bool isPrime(int n, int i) {
    if (n <= 1) return 0;
    if (n == 2 || n == 3) return 1;
    if (n % i == 0) return 0;
    if (i == n - 1) return 1;
    isPrime(n, i + 1);
}