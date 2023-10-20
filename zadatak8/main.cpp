#include <iostream>
using namespace std;

int main() {
//    Napisite program za unos varijabli a, b, c koji ispisuje najmanju vrijednost

    int a, b, c;
    cout << "Unesite 'a': ";
    cin >> a;
    cout << "Unesite 'b': ";
    cin >> b;
    cout << "Unesite 'c': ";
    cin >> c;

    int temp = a < b ? a : b;

    cout << "Najmanja vrijednost je: " << (temp < c ? temp : c) << endl;
    cout << "Najmanja vrijednost je: " << min(min(a, b), c) << endl;

    return 0;
}
