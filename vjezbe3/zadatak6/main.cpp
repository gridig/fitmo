#include <iostream>
using namespace std;

int main() {
//    Samoglasnik, suglasnik ili specijalni znak

    char slovo;
    cout << "Unesite slovo:";
    cin >> slovo;
    slovo = char(tolower(slovo));

    cout << ((slovo == 'a' || slovo == 'e' || slovo == 'i' || slovo == 'o' || slovo == 'u') ?
    "Samoglasnik" : "Suglasnik");

    return 0;
}
