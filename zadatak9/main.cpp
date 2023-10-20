#include <iostream>
using namespace std;

int main() {
//    Napisite program koji ce provjeriti da li je uneseni znak veliko slovo
//    INPUT: znak[char]
//    OUTPUT: "Da" ili "Ne:"

//    char znak;
//    cout << "Unesite znak: ";
//    cin >> znak;
//    cout << (znak >= 65 && znak <= 90 ? "Da" : "Ne") << endl;
//
//    cout << (isupper(znak) ? "Da" : "Ne") << endl;


    char znak;

    cout << "Unesite znak: ";
    cin >> znak;
    cout << (znak >= 'a' and znak <= 'z' ? "Da" : "Ne") << endl;

    cout << (islower(znak) ? "Da" : "Ne") << endl;

    return 0;
}
