#include <iostream>
using namespace std;

bool isPrime(int n, int i = 2) {
    if (n <= 1) return false;
    if(n == 2 || n == 3) return true;
    if (n % i == 0) return false;
    if (i == n - 1) return true;
    return isPrime(n, i + 1);
}

int main() {
//    Napišite rekurzivnu funkciju 'isPrime', koja provjerava da li je dati broj prost.

    int n;

    cout << "Unesi broj" << endl;
    cin >> n;

    isPrime(n) ? cout << "jeste prajm": cout << "nije prajm";

    return 0;
}
