#include <iostream>
using namespace std;

bool isPrime(int broj, int brojac = 2) {
    if(broj <= 1) return false;
    if(broj == 2 || broj == 3) return true;
    if(broj % brojac == 0) return false;
    if(brojac == broj - 1) return true;
    isPrime(broj, brojac + 1);
}

int main() {
    int n;

    cout << "Unesi broj: ";
    cin >> n;

    cout << "Broj " << n << (isPrime(n) ? " je prost" : " nije prost");

    return 0;
}