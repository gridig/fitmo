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
    char document[200] = "Red dead redemption";
    char pojam[10] = "";

    enterText(pojam, size(pojam));
    printText(pojam);

    const char* rezultat = strstr(document, pojam);

    if(rezultat != nullptr)
        cout << rezultat << endl;
    else
        cout << "Nije pronadjen tekst";

    return 0;
}
