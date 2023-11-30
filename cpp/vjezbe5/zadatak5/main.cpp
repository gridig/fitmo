#include <iostream>
using namespace std;

int main() {
    /*
        Unesite broj n. Ispisati sve brojeve koji su djeljivi sa 4 od 1 do n koristeći for petlju.
        Input: n [int]
        Output: 4 8 12 ... (sve brojevi djeljivi sa 4 do n)
    */

    int n;

    cout << "Unesite n: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
        i%4 == 0 && cout << i << " ";

//    for (int i = 4; i <= n; i += 4)
//        cout << i << " ";

    return 0;
}
