#include<iostream>
using namespace std;

void enterText(char* arr, int size)
{
    cout << "Unesite tekst: ";
    cin.getline(arr, size);
}

void printText(const char* arr)
{
    cout << arr << endl;
}

char* createText(int size) {
    char* text = new char[size];
    strcpy(text, "");
    return text;
}

char* createTextFrom(const char* source){
    if (source == nullptr) return nullptr;
    int size = strlen(source) + 1;
    char* novi = new char[size];
    strcpy(novi, source);
    return novi;
}

void deleteText(char*& tekst) {
    delete[] tekst;
    tekst = nullptr;
}

int main() {
    int size;
    
    do {
        cout << "Unesi velicinu teksta: ";
        cin >> size;
        cin.ignore();
    } while (size < 1);

    char* originalText = createText(size);

    enterText(originalText, size);
    printText(originalText);

    char* copiedText = createTextFrom(originalText);
    cout << "Kopiranji tekst: ";
    printText(copiedText);

    deleteText(copiedText);
    deleteText(originalText);

    return 0;
}