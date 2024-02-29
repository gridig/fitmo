//Napisati program za sabiranje matrica proizvoljnih dimenzija.
//Neka su date dvije matrice A i B, koje je potrebno popuniti sluèajnim vrijednostima u opsegu
// unos prirodnog broja; prebrojati cifre; ispisati prvu, srednju i zadnju cifru; obrnuti cifre

#include <iostream>
using namespace std;

int prebrojCifre(int, int);
int prvaCifra(int);
int srednjaCifra(int);
int zadnjaCifra(int);
int obrnutiCifre(int);

int main()
{
	int n;

	do {
		cout << "Unesi prirodni broj: ";
		cin >> n;
	} while (n <= 0);

	int brojac = 0;

	cout << "Ukupno cifara: " << prebrojCifre(n, brojac) << endl;
	cout << "Prva cifra: " << prvaCifra(n) << endl;
	(srednjaCifra(n) == -1) ? cout << "Nema srednju cifru (paran broj cifara)" << endl : cout << "Srednja cifra je: " << srednjaCifra(n) << endl;
	cout << "Zadnja cifra: " << zadnjaCifra(n) << endl;
	cout << "Obrnute cifre: " << obrnutiCifre(n) << endl;

	system("pause");
	return 0;
}

int prebrojCifre(int n, int brojac) {
	if (n < 1) return brojac;
	n /= 10;
	prebrojCifre(n, ++brojac);
}

int prvaCifra(int n) {
	if (n < 10) return n;
	n /= 10;
	prvaCifra(n);
}

int srednjaCifra(int n) {
	if (prebrojCifre(n, 0) % 2 == 0) return -1;
	int ukloniCifara = prebrojCifre(n, 0)/2;
	n = n / pow(10, ukloniCifara);
	return n % 10;
}

int zadnjaCifra(int n) {
	return n % 10;
}

int obrnutiCifre(int n) {
	int m = 0, temp = 0;
	do {
		temp = n % 10;
		m = m * 10 + temp;
		n /= 10;
	} while (n > 0);
	return m;
}