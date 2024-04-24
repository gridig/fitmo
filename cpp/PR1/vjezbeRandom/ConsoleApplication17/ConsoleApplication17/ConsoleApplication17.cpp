#include <iostream>
using namespace std;

const int MAX_SIZE = 5;

int brojCifara(int);
void unos(int[]);
void noviNiz(int[], int&);

int main()
{
	int arr[MAX_SIZE], newSize = 0;

	cout << "Unesi parni broj sa neparnim brojem cifara u niz" << "\n";
	cout << "________________________________________________" << "\n\n";

	unos(arr);

	noviNiz(arr, newSize);
}

int brojCifara(int n) {
	int broj = 0;

	do {
		n /= 10;
		broj++;
	} while (n > 0);
	return broj;
}

void unos(int arr[]) {
	for (int i = 0; i < MAX_SIZE; i++)
	{
		do {
			cout << "Na poziciju [" << i << "]: ";
			cin >> arr[i];
		} while (arr[i] % 2 != 0 || brojCifara(arr[i]) % 2 == 0 || arr[i] <= 0);
	}
}

void noviNiz(int arr[], int&newSize) {
	int j = 0;

	for (int i = 0; i < MAX_SIZE; i++)
	{
		if (arr[i] % 6 != 0)
		{
			arr[j] = arr[i];
			j++;
			cout << arr[j] << " ";
		}
	}
	newSize = j;
}
