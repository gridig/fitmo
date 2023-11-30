#include <iostream>

using namespace std;

int main() {
    /*
        Ispisati pravougaonik sa zvjezdicama dimenzija m x n koristeći for petlju.
        Input: m [int], n [int]
        Output: Pravougaonik sa zvjezdicama
    */

    int m, n;

    cout << "Unesite dimenziju m: ";
    cin >> m;
    cout << "Unesite dimenziju n: ";
    cin >> n;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
