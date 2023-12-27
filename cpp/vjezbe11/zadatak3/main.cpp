#include <iostream>
using namespace std;

void enterText(char* arr, int size) {
    cout << "Unesite tekst: ";
    cin.getline(arr, size);
}

void printText(const char* arr) {
    cout << arr << endl;
}

bool areEqual(const char* text1 = "", const char* text2 = "") {
    if(text1 == nullptr || text2 == nullptr) return false;
    return strcmp(text1, text2) == 0;
}

int main() {
    char text1[50] = "";
    char text2[70] = "";

    enterText(text1, size(text1));
    printText(text1);

    enterText(text2, size(text2));
    printText(text2);

    areEqual(text1, text2) ? cout << "jednaki" : cout << "nisu jednaki";

    return 0;
}
