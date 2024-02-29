#include <iostream>

using namespace std;

bool isPrime(int x) {
    if (x == 1) return true;

    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

bool isSorted(int x) {
    int trenutnaCifra = 9;
    while (x) {
        if (trenutnaCifra >= x % 10) trenutnaCifra = x % 10;
        else return false;
        x /= 10;
    }
    return true;
}

int main() {
    int n;
    do {
        cout << "Unesi n:" << "\n";
        cin >> n;
    } while (n < 2 || n > 1000);

    for (int i = 2; i <= n; i++) { if (isPrime(i) && isSorted(i)) cout << i << " "; }

    return 0;
}
