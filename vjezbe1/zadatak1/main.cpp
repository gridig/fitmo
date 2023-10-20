#include <iostream>
using namespace std;

int main() {
//    Napisati program za racunanje povrsine pravougaonika.
//    Potrebno je da korisnik unese vrijednosti 'a' i 'b' (duzina i sirina pravougaonika) nakon cega ce se ispisati ukupna vrijednost povrsine datog pravougaonika.
//    Input: a [float], b [float]
//    Output: povrsina [float]

    float a = 0.0f;
    float b = 0.0f;

    cout << "Program za racunanje povrsine pravougaonika" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Unesite duzinu stranice a (u metrima):" << endl;
    cin >> a;
    cout << "Unesite duzinu stranice b (u metrima)::" << endl;
    cin >> b;
    cout << "-------------------------------------------" << endl;
    cout << "Povrsina je: " << a*b << " metara kvadratnih" << endl;

    return 0;
}
