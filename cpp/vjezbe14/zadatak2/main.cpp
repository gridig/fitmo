#include <iostream>
using namespace std;

void printLettersBetweenInReverse(char a, char b);

int main() {
//    Napravite rekurzivnu funkciju 'printLettersInReverse', koja treba da ispiše sva velika slova
//    koja se nalaze između dva proslijeđena velika slova (ali u obratnom redoslijedu).

    char a, b;

    cout << "Unesi prvo veliko slovo" << endl;

    do {
        do {
            cin >> a;
        } while (!isupper(a));
        cout << "Unesi drugo veliko slovo" << endl;
        do {
            cin >> b;
        } while (!isupper(b));
    } while (a > b);

    printLettersBetweenInReverse(a, b);

    return 0;
}

void printLettersBetweenInReverse(char a, char b) {
    if(!isupper(a) || !isupper(b)) return;
    if (a >= b - 1) return;

    printLettersBetweenInReverse(char(a + 1), b);
    cout << char(a + 1);
}