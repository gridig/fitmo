#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cout << "unesite vrijednost a: ";
    cin >> a;
    cout << "unesite vrijednost b: ";
    cin >> b;

    int rezultat = max(a,b);

    cout << "Izmedju vrijednosti 'a' i vrijednosti 'b' veca vrijednost je: " << rezultat << endl;

    return 0;
}
