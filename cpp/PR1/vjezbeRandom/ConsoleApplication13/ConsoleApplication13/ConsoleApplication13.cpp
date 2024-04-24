#include <iostream>
using namespace std;

int prvaCifra(int);
int sumaOstalih(int);
bool dobarBroj(int);
void unos(int, int[], int);
void ispis(int, int[], int);

const int MAX_SIZE = 10;

int main()
{
	int n, arr[MAX_SIZE], i = 0;

	do {
		cout << "Koliko brojeva zelite unijeti? (n <= 10) ";
		cin >> n;
	} while (n < 1 || n > 10);

	unos(n, arr, i);
	ispis(n, arr, i);

	system("Pause");
	return 0;
}

int prvaCifra(int n) {
	do {
		n /= 10;
	} while (n >= 10);
	return n;
}

int sumaOstalih(int n) {
	int suma = 0, temp = 0;
	do {
		temp = n % 10;
		suma += temp;
		n /= 10;
	} while (n >= 10);
	return suma;
}

bool dobarBroj(int n) {
	if (prvaCifra(n) > sumaOstalih(n)) return true;
	return false;
};

void unos(int n, int arr[], int i) {
	if (i == n) return;
	do {
		cout << "Unesi broj na poziciji [" << i << "]: ";
		cin >> arr[i];
	} while (!dobarBroj(arr[i]));
	unos(n, arr, i+1);
}

void ispis(int n, int arr[], int i) {
	if (i == n) return;
	cout << "Broj na poziciji [" << i << "] je: " << arr[i] << endl;
	ispis(n, arr, i+1);
}