#include <iostream>
using namespace std;

int sumSpec(int broj1, int broj2);

int main() {
    int m, n;

    do {
        cout << "Unesi broj m: ";
        cin >> m;
        cout << "Unesi broj n da je veci od m: ";
        cin >> n;
    } while (m > n);

    cout << "Suma brojeva koji su djeljivi sa 3 i nedjeljivi sa 7 je: " << sumSpec(m, n) << endl;

    return 0;
}

int sumSpec(int broj1, int broj2) {
    if(broj1 > broj2) return 0;
    return ((broj1 % 3 == 0) && (broj1 % 7 != 0) ? broj1 : 0) + sumSpec(broj1 + 1, broj2);
}