#include <iostream>
using namespace std;

int getRandValue(int from, int to);
int** createMatrix(int rows, int columns);
void setRandomValue(int** m, int rows, int columns, int from, int to);
void printMatrix(int** m, int rows, int columns);


int main()
{
    srand(42);

    int rows = 1;
    int columns = 1;

    int from = 6, to = 10;

    do {
        cout << "Unesi broj redova: ";
        cin >> rows;
        cout << "Unesi broj kolona: ";
        cin >> columns;
    } while (rows < 1 || columns < 1);

    int** m = createMatrix(rows, columns);
    
    setRandomValue(m, rows, columns, from, to);

    printMatrix(m, rows, columns);

    system("pause");
    return 0;
}

int getRandValue(int from, int to) {
    return rand() % (to - from + 1) + from;
}

int** createMatrix(int rows, int columns) {
    int** m = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        m[i] = new int[columns] {0};
    }
    return m;
}

void setRandomValue(int** m, int rows, int columns, int from, int to) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            m[i][j] = getRandValue(from, to);
}

void printMatrix(int** m, int rows, int columns) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout.width(5);
            cout << m[i][j];
        }
        cout << endl;
    }
}