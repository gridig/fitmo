#include <iostream>
using namespace std;

int main() {
    /*
        Unesite broj n. Ispisati sve brojeve od n do 1 koristeći for petlju.
        Input: n [int]
        Output: n n-1 n-2 ... 1
    */

    int n;

    cout << "Unesite n: ";
    cin >> n;

    for(int i = n; i >= 1; i--)
        cout << i << " ";

    return 0;
}
