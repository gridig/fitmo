#include <iostream>

using namespace std;

int main() {
    char znak = 'a';
    char esc = '\n';
    char tab = '\t';
    char r = '\r';

    int ascii;
    cout << "unesite ASCII vrijednost: \n";
    cin >> ascii;
    cout << "Unesena ASCII vrijednost je: " << ascii << ", a char je: " << char(ascii) << endl;

//    operator jednakosti     ==
//    operator nejednakosti   !=

    int a;
    int b;

    cout << "unesite vrijednost a: ";
    cin >> a;
    cout << "unesite vrijednost b: ";
    cin >> b;

    cout << a << " > " << b << ": " << (a > b) << endl;
    cout << a << " < " << b << ": " << (a < b) << endl;
    cout << a << " >= " << b << ": " << (a >= b) << endl;
    cout << a << " <= " << b << ": " << (a <= b) << endl;

    cout << "Izmedju vrijednosti 'a' i vrijednosti 'b' veca vrijednost je: "
        << (a > b ? "a("+to_string(a)+")" : "b("+to_string(b)+")")
        << endl;

    bool c;

    cout << "Unijeti vrijednost 'c': " << endl;
    cin >> c;

    bool d = !c;

    cout << "Vrijednost 'a': " << c << endl;
    cout << "Vrijednost 'd': " << d << endl;

    return 0;
}
