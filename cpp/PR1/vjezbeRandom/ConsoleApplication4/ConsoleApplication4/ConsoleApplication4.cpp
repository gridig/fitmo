//Napišite program koji æe omoguæiti kreiranje 1D niza proizvoljne velièine, te uz pomoæ rekurzivnih
//funkcija omoguæiti :
//->unos elemenata
//->ispis elemenata
//->izraèunati sumu svih elemenata niz
//->sumu pozitivnih elemenata niza


#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void unos(int arr[], int i, int size);
void ispis(int arr[], int i, int size);
int sumaElem(int arr[], int i, int size);
int sumaPozElem(int arr[], int i, int size);
int sumaElemParniIndex(int arr[], int i, int size);


int main()
{
    int n;
    int arr[MAX_SIZE];
    do {
        cout << "Unesi velicinu niza ";
        cin >> n;
    } while (n < 1);

    unos(arr, 0, n);
    cout << "Niz se sastoji od sljedecih clanova: ";
    ispis(arr, 0, n);
    cout << endl;
    cout << "Suma svih elemenata niza je: " << sumaElem(arr, 0, n) << endl;
    cout << "Suma svih pozitivnih elemenata niza je: " << sumaPozElem(arr, 0, n) << endl;
    cout << "Suma svih elemenata niza sa parnim indexom je: " << sumaElemParniIndex(arr, 0, n) << endl;
    return 0;
}


void unos(int arr[], int i, int size) {
    if (i == size) return;
    cout << "Unesi vrijednost na poziciji [" << i << "] ";
    cin >> arr[i];
    unos(arr, i + 1, size);
};

void ispis(int arr[], int i, int size) {
    if (i == size) return;
    cout << arr[i] << ((i != (size - 1)) ? ", " : ".");
    ispis(arr, i + 1, size);
}

int sumaElem(int arr[], int i, int size) {
    if (i == size) return 0;
    return arr[i] + sumaElem(arr, i + 1, size);
}

int sumaPozElem(int arr[], int i, int size) {
    if (i == size) return 0;
    return (arr[i] > 0 ? arr[i] : 0) + sumaPozElem(arr, i + 1, size);
}

int sumaElemParniIndex(int arr[], int i, int size) {
    if (i == size) return 0;
    return (i % 2 == 0 ? arr[i] : 0) + sumaElemParniIndex(arr, i + 1, size);
}
