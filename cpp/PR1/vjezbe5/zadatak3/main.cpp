#include <iostream>
using namespace std;

int main() {
    /*
        Ispisati faktorijel broja n koristeći while petlju.
        Primjer:
        5! = 5 * 4 * 3 * 2 * 1

        Input: n [int]
        Output: n! (n faktorijel)
    */

    int n;

    cout << "Unesite n: ";
    cin >> n;

    int i = 1;
    int faktorijel = 1;
    while (i <= n) {
        faktorijel *= i;
        i++;
    }

    cout << n << "!" << " = " << faktorijel;

    return 0;
}
