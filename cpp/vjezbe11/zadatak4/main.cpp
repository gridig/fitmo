#include <iostream>
using namespace std;

void enterText(char* arr, int size) {
    cout << "Unesite tekst: ";
    cin.getline(arr, size);
}

void printText(const char* arr) {
    cout << arr << endl;
}

int main() {
    char text1[50] = "";
    char text2[70] = "";

    enterText(text1, size(text1));
    printText(text1);

    enterText(text2, size(text2));
    printText(text2);

    bool statusniKod = strcpy(text2, text1);

    cout << "Statusni kod: " << statusniKod << " ;";

    statusniKod == 1 ? cout << "Kopiranje uspjesno\n" :  cout << "Kopiranje neuspjesno\n";

    cout << text2;

    return 0;
}
