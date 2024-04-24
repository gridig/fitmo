#include <iostream>
using namespace std;

int main() {
    /*
        Ispisati sumu prvih n prirodnih brojeva koristeći for petlju.
        Input: n [int]
        Output: Suma prvih n brojeva [int]
    */

    int n;

    cout << "Unesite n: ";
    cin >> n;
    int suma = 0;
    for (int i = 1; i <= n; i++)
        suma += i;
    cout << suma;

    return 0;
}
