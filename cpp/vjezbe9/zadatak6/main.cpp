#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void enterArray(int niz[], int velNiza, int brojac = 0) {
    if(brojac == velNiza) return;
    cout << "Unesite el na index " << brojac << endl;
    cin >> niz[brojac];
    enterArray(niz, velNiza, brojac + 1);
}

void printArray(int niz[], int velNiza, int brojac = 0) {
    if(brojac == velNiza) return;
    cout << niz[brojac] << " ";
    printArray(niz, velNiza, brojac + 1);
}

int sumOfArray(int niz[], int velNiza, int brojac = 0) {
    if(brojac == velNiza) return 0;
    return niz[brojac] + sumOfArray(niz, velNiza, brojac + 1);
}

int positiveSumOfArray(int niz[], int velNiza, int brojac = 0) {
    if(brojac == velNiza) return 0;
    return (niz[brojac] > 0 ? niz[brojac] : 0) + positiveSumOfArray(niz, velNiza, brojac + 1);
}

int sumOfEvenIndexes(int niz[], int velNiza, int brojac = 0) {
    if(brojac == velNiza) return 0;
    return (brojac % 2 == 0 ? niz[brojac] : 0) + sumOfEvenIndexes(niz, velNiza, brojac + 1);
}

int main() {
    int velNiza;
    int arr[MAX_SIZE];

    do {
        cout << "Unesi velicinu niza do 100: ";
        cin >> velNiza;
    } while (velNiza < 1);

    enterArray(arr, velNiza);
    cout << "Niz ima elemente ";
    printArray(arr, velNiza);
    cout << endl;
    cout << "Suma svih el u nizu je: " << sumOfArray(arr, velNiza) << endl;
    cout << "Suma svih pozitivnih el u nizu je: " << positiveSumOfArray(arr, velNiza) << endl;
    cout << "Suma elemenata sa parnim indeksima je: " << sumOfEvenIndexes(arr, velNiza) << endl;

    return 0;
}