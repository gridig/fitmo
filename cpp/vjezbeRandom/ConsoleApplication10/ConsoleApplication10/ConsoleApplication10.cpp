#include <iostream>
using namespace std;

bool djeljivSvojimCiframa(int);
int brojCifara(int n);

int main()
{
	int x, y;

	do {
		cout << "Unesi X: ";
		cin >> x;
		cout << "Unesi Y: ";
		cin >> y;
	} while (x < 10 || x > 6000 || y < 10 || y > 6000);

	for (int i = x; i <= y; i++)
	{
		cout << "Broj " << i << (djeljivSvojimCiframa(i) ? " je djeljiv " : " nije djeljiv ") << "svim svojim ciframa" << endl;
	}


	system("pause");
	return 0;
}

int brojCifara(int n) {
	int brojac = 0;
	do {
		n /= 10;
		brojac++;
	} while (n > 1);
	return brojac;
}

bool djeljivSvojimCiframa(int n) {
	int temp = 0, potencija = 0;
	do {
		temp = n / pow(10, potencija);
		if (n % temp != 0) return false;
		potencija++;
	} while (potencija < brojCifara(n));

	return true;
}
