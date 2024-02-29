#include <iostream>
using namespace std;

const int BROJ_POLJA = 5;

int getRandomValue(int, int);
int** createMatrix(int rows, int columns);
void setRandomValues(int** matrix, int rows, int columns, int from, int to);
void deleteMatrix(int** matrix, int rows);
void printMatrix(int** matrix, int rows, int columns);
int** addmatrices(int** m1, int** m2, int rows, int columns);

int main()
{
	srand(time(NULL));

	int rows = 1, columns = 1;

	do
	{
		cout << "Unesite broj redova: " << endl;
		cin >> rows;
		cout << "Unesite broj kolona: " << endl;
		cin >> columns;
	} while (rows < 1 || columns < 1);

	int** m1 = createMatrix(rows, columns);
	int** m2 = createMatrix(rows, columns);

	int from = 1, to = 5;
	setRandomValues(m1, rows, columns, from, to);
	setRandomValues(m2, rows, columns, from, to);

	cout << "Matrica 1: " << endl;
	printMatrix(m1, rows, columns);

	cout << "Matrica 2: " << endl;
	printMatrix(m2, rows, columns);

	int** m3 = addmatrices(m1, m2, rows, columns);
	cout << "Zbirna matrica: " << endl;
	printMatrix(m3, rows, columns);

	deleteMatrix(m1, rows);
	deleteMatrix(m2, rows);
	deleteMatrix(m3, rows);

	system("pause");
	return 0;
}

int getRandomValue(int from, int to) {
	return rand() % (to - from + 1) + from;
}

int** createMatrix(int rows, int columns) {
	int** m = new int* [rows];
	for (int i = 0; i < rows; i++)
		m[i] = new int[columns] {0};
	return m;
}

void setRandomValues(int** matrix, int rows, int columns, int from, int to) {
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			matrix[i][j] = getRandomValue(from, to);
}

void printMatrix(int** matrix, int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++)
		{
			cout.width(3);
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void deleteMatrix(int** matrix, int rows) {
	for (int i = 0; i < rows; i++) {
		delete[] matrix[i];
		matrix[i] = nullptr;
	}
	delete[] matrix;
}

int** addmatrices(int** m1, int** m2, int rows, int columns) {
	int** m3 = createMatrix(rows, columns);
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			m3[i][j] = m1[i][j] + m2[i][j];
	return m3;
}
