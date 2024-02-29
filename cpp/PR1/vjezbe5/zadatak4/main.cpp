#include <iostream>
using namespace std;

int main() {
    /*
        Ispisati prvih n brojeva Fibonaccijevog niza koristeći for petlju.
        Input: n [int]
        Output: 0 1 1 2 3 5 ...
    */

    int n;

    cout << "Unesite n: ";
    cin >> n;

    int a = 0, b = 1;

    cout << a << " ";

    for(int i = 1; i < n; i++) {
        cout << b << " ";
        int temp = b;
        b = a + b;
        a = temp;
    }

    return 0;
}
