#include <iostream>
using namespace std;

bool isPrime(int, int);
void goldbah(int);

int main()
{
	int x, y;

	do {
		cout << "Unesi prvi broj: ";
		cin >> x;
		cout << "Unesi drugi broj: ";
		cin >> y;
	} while (x < 1 || y < 1 || x == y);

	if (x > y) {
		int temp;
		temp = x;
		x = y;
		y = temp;
	}

	for (int i = x; i <= y; i++)
	{
		if (i % 2 == 0) goldbah(i);
	}

	system("pause");
	return 0;
}

bool isPrime(int n, int brojac = 2) {
	if (n <= 1) return false;
	if (n == 2 || n == 3) return true;
	if (n % brojac == 0) return false;
	if (n - 1 == brojac) return true;
	isPrime(n, brojac + 1);
}

void goldbah(int n) {
	bool found = false;
	int brojac = 0;
	for (int i = 2; i < n; i++)
	{
		if (isPrime(i) && isPrime(n - i) && found == false)
		{ 
			cout << i << " + " << n - i << " = " << n << endl;
			found = true;
		}
		brojac = i;

	}
	cout << "brojac" << brojac << endl;
}