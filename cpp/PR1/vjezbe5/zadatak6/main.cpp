#include <iostream>
using namespace std;

int main() {
    /*
        Unesite broj n. Ispisati sve stepene broja 2 do 2^n koristeći do-while petlju.
        Input: n [int]
        Output: 2^0 2^1 2^2 ... 2^n
    */

    int n;

    cout << "Unesite n: ";
    cin >> n;

    int i = 0;

    do {
        cout << pow(2,i) << " ";
        i++;
    } while (i <= n);

    return 0;
}
