#include <iostream>
using namespace std;

int main(){
    char slovo;
    cout << "Unesite malo slovo: ";
    cin >> slovo;

    islower(slovo) ? cout << char(toupper(slovo)) << endl : cout << "Pogresan unos";

    islower(slovo) ? cout << char('A' + (slovo - 'a')) << endl : cout << "Pogresan unos";

    return 0;
}