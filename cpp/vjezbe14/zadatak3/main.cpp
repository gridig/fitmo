#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void enterArray(int arr[], int i, int size) {
    if (i == size)
        return;
    cout << "Unesite element na poziciji [" << i << "]: ";
    cin >> arr[i];
    enterArray(arr, i + 1, size);
}

void printArray(int arr[], int i, int size) {
    if (i == size)
        return;
    cout << arr[i] << " ";
    printArray(arr, i + 1, size);
}

int sumOfArray(int arr[], int i, int size) {
    if (i == size)
        return 0;
    return arr[i] + sumOfArray(arr, i + 1, size);
}

int positiveSumOfArray(int arr[], int i, int size) {
    if (i == size)
        return 0;
    return (arr[i] > 0 ? arr[i] : 0) + positiveSumOfArray(arr, i + 1, size);
}

int sumOfEvenIndices(int arr[], int i, int size) {
    if (i == size) return 0;
    return (i % 2 == 0 ? arr[i] : 0) + sumOfEvenIndices(arr, i + 1, size);
}

int main() {
//    Napišite program koji će omogućiti kreiranje 1D niza proizvoljne veličine, te uz pomoć
//    rekurzivnih funkcija omogućiti:
//    -> unos elemenata
//    -> ispis elemenata
//    -> izračunati sumu svih elemenata niza
//    -> sumu pozitivnih elemenata niza
//    -> sumu elemenata niza s parnim indeksom

    int n;
    int arr[MAX_SIZE];
    do {
        cout << "Unesite velicinu niza: " << endl;
        cin >> n;
    } while (n < 1 || n > MAX_SIZE);
    enterArray(arr, 0, n);
    cout << endl;
    printArray(arr, 0, n);
    cout << "Suma svih elemenata u nizu je " << sumOfArray(arr, 0, n) << endl;
    cout << "Suma svih pozitivnih elemenata u nizu je " << positiveSumOfArray(arr, 0, n) << endl;
    cout << "Suma elemenata sa parnim indeksima u nizu je " << sumOfEvenIndices(arr, 0, n) << endl;
    return 0;

}
