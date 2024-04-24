#include <iostream>
#include <iomanip>
using namespace std;

// funkcija za kreiranje dinamičke matrice
int** createMatrix(int rows, int columns) {
    int** m = new int* [rows];
    for (int i = 0; i < rows; i++)
        m[i] = new int[columns] {0}; // inicijalizacija dinamičkih varijabli na 0
    return m;
}

int getRandomValue(int from, int to) {
    return rand() % (to - from + 1) + from;
}

// funkcija za setovanje random vrijednosti
void setRandomValues(int** matrix, int rows, int columns, int from, int to) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            matrix[i][j] = getRandomValue(from, to);
}

// funkcija za sabiranje matrica
int** addmatrices(int** m1, int** m2, int rows, int columns) {
    int** m3 = createMatrix(rows, columns);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            m3[i][j] = m1[i][j] + m2[i][j];
    return m3;
}

// funkcija za printanje matrice
void printMatrix(int** matrix, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            cout << setw(3) << matrix[i][j] << " ";
        cout << endl;
    }
}

// funkcija za dealokaciju matrice
void deleteMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
        matrix[i] = nullptr;
    }
    delete[] matrix;
}


int main() {
//    Napisati program za sabiranje matrica proizvoljnih dimenzija.
//    Neka su date dvije matrice A i B, koje je potrebno popuniti slučajnim vrijednostima u opsegu
//    [1-5]
//    Formirati matricu C kao zbir matrica A i B:
//    C[i,j] = A[i,j] + B[i,j]

    srand(time(NULL));
    int rows = 1, columns = 1;
    do
    {
        cout << "Unesite broj redova: " << endl;
        cin >> rows;
        cout << "Unesite broj kolona: " << endl;
        cin >> columns;

    } while (rows < 1 || columns < 1);

    // kreiranje matrica m1 i m2
    int** m1 = createMatrix(rows, columns);
    int** m2 = createMatrix(rows, columns);

    // randomizacija vrijednosti
    int from = 1, to = 5;
    setRandomValues(m1, rows, columns, from, to);
    setRandomValues(m2, rows, columns, from, to);

    // printanje prve matrice
    cout << "Matrica 1: " << endl;
    printMatrix(m1, rows, columns);
    // printanje druge matrice
    cout << "Matrica 2: " << endl;
    printMatrix(m2, rows, columns);

    int** m3 = addmatrices(m1, m2, rows, columns);
    cout << "Zbirna matrica: " << endl;
    printMatrix(m3, rows, columns);

    // dealokacija matrica
    deleteMatrix(m1, rows);
    deleteMatrix(m2, rows);
    deleteMatrix(m3, rows);

    return 0;
}