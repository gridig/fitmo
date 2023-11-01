#include <iostream>
using namespace std;

int main() {
    int broj;

    cout << "Unesite neki broj: ";
    cin >> broj;

    if(broj > 42) {
        cout << "Previse" << endl;
    } else if (broj < 42) {
        cout << "Premalo" << endl;
    } else {
        cout << "Tajna zivota, svemira i svega" << endl;
    }

    return 0;
}
