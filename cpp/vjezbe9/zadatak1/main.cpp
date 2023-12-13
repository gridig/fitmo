#include <iostream>
using namespace std;

int faktorijel(int broj);

int main() {
    int unos;

    do {
        cout << "Unesi broj: ";
        cin >> unos;
    } while (unos <= 0);

    cout << "Faktorijel broja " << unos << " je: " << faktorijel(unos) << endl;

    return 0;
}

int faktorijel(int broj) {
    if(broj == 1) return 1;
    return broj * faktorijel(broj - 1);
}