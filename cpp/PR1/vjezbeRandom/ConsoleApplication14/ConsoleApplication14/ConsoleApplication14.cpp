#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

void unos(int, int[], int);
void sortiranje(int, int[], int);
void ispis(int, int[], int);

int main()
{
	int n, arr[MAX_SIZE], brojac = 0;

	do {
		cout << "Unesi n:" << endl;
		cin >> n;
	} while (n > 10 || n < 1);

	unos(n, arr, brojac);
	sortiranje(n, arr, brojac);
	ispis(n, arr, brojac);

	system("pause");
	return 0;
}

void unos(int n, int arr[], int brojac) {
	if (brojac == n) return;
	do {
		cout << "Unesi broj na poziciju [" << brojac << "]: ";
		cin >> arr[brojac];
	} while (arr[brojac] < 99 || arr[brojac] > 999);
	unos(n, arr, brojac + 1);
}


void sortiranje(int n, int arr[], int brojac) {
	if (brojac == n) return;
	int srednja1, srednja2;
	for (int i = 0; i < n - 1; i++)
	{
		srednja1 = (arr[i] / 10) % 10;
		srednja2 = (arr[i + 1] / 10) % 10;
		if (srednja1 > srednja2) {
			swap(arr[i], arr[i + 1]);
		}
	}
	sortiranje(n, arr, brojac + 1);
}

void ispis(int n, int arr[], int brojac) {
	if (brojac == n) return;
	cout << "Na poziciji [" << brojac << "] Trocifreni broj je: " << arr[brojac] << endl;
	ispis(n, arr, brojac + 1);
}