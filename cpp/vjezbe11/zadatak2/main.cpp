#include <iostream>
using namespace std;

void enterText(char* tekst, int size){
    cout << "Unesi tekst: ";
    cin.getline(tekst, size);
}

void printText(const char* tekst) {
    cout << tekst << endl;
}

int main() {
    char arr[50] = "";

    enterText(arr, size(arr));
    printText(arr);

    return 0;
}
