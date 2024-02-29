#include <iostream>
using namespace std;

const int BROJ_POLJA = 5;

int getRandomValue(int, int);
int brojCifara(int, int);
void unos(int[][BROJ_POLJA]);
void ispis(int[][BROJ_POLJA]);
int zbirDijagonale(int[][BROJ_POLJA]);

int main()
{
	srand(time(NULL));

	int niz[BROJ_POLJA][BROJ_POLJA];

	unos(niz);
	ispis(niz);
	cout << zbirDijagonale(niz);

	cout << "Hello World!\n";
	system("pause");
	return 0;
}

int getRandomValue(int from, int to) {
	return rand() % (to - from + 1) + from;
}

int brojCifara(int n, int brojac) {
	if (n < 1) return brojac;
	n /= 10;
	brojCifara(n, brojac + 1);
}

void unos(int niz[][BROJ_POLJA]) {
	int random = 0;
	for (int i = 0; i < BROJ_POLJA; i++)
	{
		for (int j = 0; j < BROJ_POLJA; j++)
		{
			if ((i + j) % 2 == 0) {
				do {
					random = getRandomValue(9, 999);
					niz[i][j] = random;
				} while (brojCifara(random, 0) % 2 == 0 || random % 2 != 0);

			}
			if ((i + j) % 2 != 0) {
				do {
					random = getRandomValue(9, 999);
					niz[i][j] = random;
				} while (brojCifara(random, 0) % 2 != 0 || random % 2 == 0);

			}

		}
	}
}

void ispis(int niz[][BROJ_POLJA]) {
	for (int i = 0; i < BROJ_POLJA; i++)
	{
		for (int j = 0; j < BROJ_POLJA; j++)
		{
			cout.width(4);
			cout << niz[i][j];
		}
		cout << endl;
	}
}

int zbirDijagonale(int niz[][BROJ_POLJA]) {
	int zbir = 0;
	for (int i = 0; i < BROJ_POLJA; i++)
	{
		for (int j = 0; j < BROJ_POLJA; j++)
		{
			if (i-1 == j) {
				zbir += niz[i][j];
			}
		}
		cout << endl;
	}
	return zbir;
}