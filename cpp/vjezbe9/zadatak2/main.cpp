#include <iostream>
using namespace std;

int nthFibbonacci(int mjesto);

int main() {
    int n;

    do {
        cout << "Unesi mjesto: ";
        cin >> n;
    } while (n < 1);

    cout << "Fibbonaci mjesta broj " << n << " je: " << nthFibbonacci(n) << endl;

    return 0;
}

int nthFibbonacci(int mjesto) {
    if(mjesto <= 2) return 1;
    return nthFibbonacci(mjesto - 1) + nthFibbonacci(mjesto - 2);
}