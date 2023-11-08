#include <iostream>
using namespace std;

int func(int broj1, int broj2) {
    broj1++;
    broj2++;
    return broj1 + broj2;
}

int main() {
    int x;
    cout << "Unesite x: ";
    cin >> x;
    int y;
    cout << "Unesite y: ";
    cin >> y;
    cout << "Zbir je: " << func(x, y) << endl;
    cout << x << endl;
    cout << y << endl;
    return 0;
}
