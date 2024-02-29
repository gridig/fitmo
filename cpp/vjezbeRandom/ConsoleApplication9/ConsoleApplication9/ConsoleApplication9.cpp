#include <iostream>
using namespace std;

int brojCifara(int);
int prvaCifra(int);
int sumaSvihCifara(int);
bool sumaDjeljivaSaZbiromPrveIZadnjeCifre(int);

const int MIN_VALUE = 10;
const int MAX_VALUE = 5000;

int main()
{
	int x;
	int y;

	do {
		cout << "Definisite vrijednosti intervala [X, Y]: " << endl;
		cout << "[X]: ";
		cin >> x;
		cout << "[Y]: ";
		cin >> y;
	} while (x < MIN_VALUE || x > MAX_VALUE || y < MIN_VALUE || y > MAX_VALUE);

	int brojac = 0;

	for (int i = x; i <= y; i++)
	{
		if (sumaDjeljivaSaZbiromPrveIZadnjeCifre(i)) brojac++;
		cout << i << endl;
	}

	cout << "Ukupno brojeva od " << x << " do " << y << " koji zadovoljavaju uslov je " << brojac << endl;

	system("pause");
	return 0;
}

int brojCifara(int n) {
	int brojac = 0;
	do {
		n /= 10;
		brojac++;
	} while (n > 0);
	return brojac;
}

int prvaCifra(int n) {
	do {
		n /= 10;
	} while (n >= 10);
	return n;
}

int sumaSvihCifara(int n) {
	int suma = 0, temp = 0;
	do {
		temp = n % 10;
		suma += temp;
		n /= 10;
	} while (n >=1);
	return suma;
}

bool sumaDjeljivaSaZbiromPrveIZadnjeCifre(int n) {
	int n1 = prvaCifra(n);
	int n2 = n % 10;
	if (sumaSvihCifara(n) % (n1 + n2) == 0) return true;
	return false;
}