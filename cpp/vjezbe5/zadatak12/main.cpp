#include <iostream>
using namespace std;

int main() {
/*
    Ispisati sve palindromske brojeve od a do b koristeći for petlju.
    Palindromski broj je broj koji se čita isto i s lijeva na desno i s desna na lijevo.
    Input: a [int], b [int]
    Output: Palindromski brojevi između a i b
*/

    int a, b;
    cout << "Unesi dva razlicita broja" << std::endl;
    cout << "Broj a: ";
    cin >> a;
    cout << "Broj b: ";
    cin >> b;

/*
 * Odredjujemo veci i manji broj od dva unesena, potrebni su za for petlju
 */

    int start = a>b ? b : a;
    int end = a<b ? b : a;

    cout << "Palindromski brojevi između " << a << " i " << b << " su: ";

    for(int i = start; i < end; i++) {
        int broj = i, obrnutiBroj = 0, ostatak;

        while(broj) {
            ostatak = broj % 10;
            obrnutiBroj *= 10;
            obrnutiBroj += ostatak;
            broj /= 10;
        }

        i == obrnutiBroj && cout << i << " ";
    }

    return 0;
}
