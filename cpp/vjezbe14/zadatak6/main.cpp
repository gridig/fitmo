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

// funkcija za kreiranje dinamičkog float niza
float* createArray(int size) {
    return new float[size] {0.0f}; // inicijalizacija svih vrijednosti niza na 0.0f
}

void printArray(float* p, int size, const char* delimiter = " ") {
    for (int i = 0; i < size; i++)
        cout << p[i] << delimiter;
    cout << endl;
}

void deleteArray(float* p) {
    delete[] p;
}

float* getAveragesByRow(int** m, int rows, int columns) {
    float* averages = createArray(rows); // kreiranje niza za pohranu prosjeka po redovima
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            averages[i] += m[i][j];
        averages[i] /= columns;
    }
    return averages;
}

float* getAveragesByColumn(int** m, int rows, int columns) {
    float* averages = createArray(columns); // kreiranje niza za pohranu prosjeka po kolona
    for (int j = 0; j < columns; j++)
    {
        for (int i = 0; i < rows; i++)
            averages[j] += m[i][j];
        averages[j] /= rows;
    }
    return averages;
}


int main() {
//    Neka je data matrica M proizvoljnih dimenzija koje određuje korisnik.
//    Popuniti matricu M slučajnim vrijednostima u opsegu [6-10]
//    Napisati dvije funkcije:
//    -> getAveragesByRow [funkcija koja treba da vrati prosjeke redova]
//    -> getAveragesByColumn [funkcija koja treba da vrati prosjeke kolona

    srand(time(NULL));
    int rows = 1, columns = 1;
    do
    {
        cout << "Unesite broj redova: " << endl;
        cin >> rows;
        cout << "Unesite broj kolona: " << endl;
        cin >> columns;

    } while (rows < 1 || columns < 1);

    // kreiranje matrice m
    int** m = createMatrix(rows, columns);

    // randomizacija vrijednosti
    int from = 6, to = 10;
    setRandomValues(m, rows, columns, from, to);

    // printanje matrice
    cout << "Matrica: " << endl;
    printMatrix(m, rows, columns);

    // računanje prosjeka po redovima
    cout << "Prosjeci po redovima matrice: " << endl;
    float* rowAverages = getAveragesByRow(m, rows, columns);
    printArray(rowAverages, rows);

    // računanje prosjeka po kolonama
    cout << "Prosjeci po kolonama matrice: " << endl;
    float* columnAverages = getAveragesByColumn(m, rows, columns);
    printArray(columnAverages, columns);

    // dealokacija
    deleteMatrix(m, rows);
    deleteArray(rowAverages);
    deleteArray(columnAverages);

    return 0;
}