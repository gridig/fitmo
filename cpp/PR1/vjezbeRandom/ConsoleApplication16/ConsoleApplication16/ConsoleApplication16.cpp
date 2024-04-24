#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));

	int arr[3];
	int brojac = 0;

	do {
		for (int i = 0; i < 3; i++)
		{
			arr[i] = rand() % 14 + 1;
			cout << arr[i] << " ";
		}
		cout << endl;
		brojac++;
	} while (arr[2] - arr[1] != 5 || arr[1] - arr[0] != 5);

	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "Ukupno izvlacenja: " << brojac << endl;
	return 0;
}