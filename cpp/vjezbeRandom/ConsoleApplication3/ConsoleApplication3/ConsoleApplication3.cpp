//Napravite rekurzivnu funkciju 'printLettersInReverse', koja treba da ispi�e sva velika slova koja se
//nalaze izme�u dva proslije�ena velika slova(ali u obratnom redoslijedu).

#include <iostream>
using namespace std;

void printLettersBetweenInReverse(char a, char b);

int main()
{
    char a;
    char b;

    do {
        cout << "Unesi prvo slovo: ";
        cin >> a;
        cout << "Unesi drugo slovo: ";
        cin >> b;
    } while ((!isupper(a) || !isupper(b)) || a == b);

    printLettersBetweenInReverse(a, b);

    return 0;
}

void printLettersBetweenInReverse(char a, char b) {
    if (a > b) {
        printLettersBetweenInReverse(char(a - 1), b);
    }
    if (a < b)
        printLettersBetweenInReverse(char(a + 1), b);
    cout << a;
}