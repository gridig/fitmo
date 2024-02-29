#include <iostream>
#include <iomanip>
using namespace std;

int getRandomNumber();

int main() {
    srand(time(nullptr));

    int redovi;
    int kolone;

    cout << "Unesi broj redova: ";
    cin >> redovi;
    cout << "Unesi broj kolona: ";
    cin >> kolone;

    int matrix[redovi][kolone];

//    for (int i = 0; i < redovi; ++i) {
//        for (int j = 0; j < kolone; ++j) {
//            cout << "Unesite vrijednost na redu " << i << " u koloni " << j << ": ";
//            cin >> matrix[i][j];
//        }
//    }

    for (int i = 0; i < redovi; ++i) {
        for (int j = 0; j < kolone; ++j) {
            matrix[i][j] = getRandomNumber();
        }
    }

    cout << endl << "The Matrix:" << endl;

    for (int i = 0; i < redovi; ++i) {
        for (int j = 0; j < kolone; ++j) {
            cout << setw(6) << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}

int getRandomNumber() {
    int maxDigits = 100;
    int randomNumber = rand() % maxDigits;

    return randomNumber;
}
