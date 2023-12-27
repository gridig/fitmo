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

int main()
{
    int size;
    do
    {
        cout << "Unesite velicinu niza: ";
        cin >> size;
        cin.ignore();
    } while (size<1);

    char* c = new char[size];
    enterText(c, size);
    printText(c);

    delete[] c;
    c = nullptr;

    return 0;
}