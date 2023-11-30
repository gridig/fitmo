#include <iostream>

using namespace std;

bool h(int x) {
    while (x > 0) {
        int cifra = x % 10;
        if (cifra % 2 == 0) return true;
        x /= 10;
    }
    return false;
}

int s(int x) {
    int suma = 0;
    while (x > 0) {
        suma += (x % 10);
        x /= 10;
    }
    return suma;
}

int main() {
    int n, x;
    do {
        cout << "Unesite n: ";
        cin >> n;
    } while (n <= 0);
    do {
        cout << "Unesite x: ";
        cin >> x;
    } while (x <= 0);
    for (int i = 1; i <= n; i++) {
        if (s(i) >= x && !h(i)) cout << i << " ";
    }
    return 0;
}
