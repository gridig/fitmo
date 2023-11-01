#include <iostream>
using namespace std;

int main() {
    /*
    Napišite program koji provjerava da li je godina prijestupna ili ne.
    Prijestupna godina je godina koja ima jednu od sljedećih karakteristika:
    1. Dijeljiva je sa 4 i nije dijeljiva sa 100
    2. Dijeljiva je sa 400
    Input: godina [int]
    Output: prijestupna(?) [bool]
    */

    int godina;

    cout << "Unesite godinu koju zelite da provjerite: ";
    cin >> godina;

    bool jePrijestupna = (godina%4==0 && godina%100!=0) || (godina%400==0);

    if(jePrijestupna) {
        cout << "Godina je prijestupna" << endl;
    } else {
        cout << "Godina nije prijestupna" << endl;
    }

    cout << (jePrijestupna ? "Godina je prijestupna" : "Godina nije prijestupna") << endl;

    return 0;
}
