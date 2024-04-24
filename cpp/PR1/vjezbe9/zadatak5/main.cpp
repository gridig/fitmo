#include <iostream>
using namespace std;

void printTextInReverse() {
    char znak;
    cout << "Unesite znak da nije ." << endl;
    cin >> znak;
    if(znak != '.') printTextInReverse();
    cout << znak;
}

int main() {
    printTextInReverse();

    return 0;
}