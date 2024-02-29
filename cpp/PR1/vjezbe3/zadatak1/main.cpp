#include <iostream>
using namespace std;

int main() {
    /*
     Omoguciti korisniku unos broja sa tastature, te provjeriti da li je broj paran
    */

    int broj;

    cout << "Unesite broj: ";
    cin >> broj;

    string jeParan = broj % 2 == 0 ? "paran" : "neparan";

    cout << "Broj je " << jeParan << endl;
}
