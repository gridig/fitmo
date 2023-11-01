#include <iostream>
using namespace std;

int main() {
    /*
        Napišite program koji omogućava unos rednog broja dana u sedmici (1 za ponedjeljak, 2 za utorak, itd.) i zatim ispisuje naziv tog dana.
        Input: dan [int]
        Output: Naziv dana
    */

    int dan;
    cout << "Unesite redni broj dana u sedmici: ";
    cin >> dan;

    switch (dan) {
        case 1 :
            cout << "Ponedjeljak";
            break;
        case 2 :
            cout << "Utorak";
            break;
        case 3 :
            cout << "Srijeda";
            break;
        case 4 :
            cout << "Cetvrtak";
            break;
        case 5 :
            cout << "Petak";
            break;
        case 6 :
            cout << "Subota";
            break;
        case 7 :
            cout << "Nedjelja";
            break;
        default:
            cout << "Nije unesen trazeni podatak";
    }

    return 0;
}
