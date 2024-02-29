#include <iostream>
using namespace std;

const int BROJ_KOCKICA = 3;

void swap(int&, int&);
int bacanje(int[], int[], int);

int main()
{
	srand(time(NULL));
	int ruka[BROJ_KOCKICA], prethodnaRuka[BROJ_KOCKICA];
	int brojBacanja = 0;

	cout << "Broj bacanja je: " << bacanje(ruka, prethodnaRuka, brojBacanja) << endl;

	system("pause");
	return 0;
}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}


int bacanje(int ruka[], int prethodnaRuka[], int brojBacanja) {
	do {
		for (int i = 0; i < BROJ_KOCKICA; i++) {
			ruka[i] = rand() % 6 + 1;
			for (int j = i + 1; j < BROJ_KOCKICA; j++) {
				if (ruka[i] > ruka[j]) {
					swap(ruka[i], ruka[j]);
				}
			}
			cout << ruka[i] << " ";
		}

		cout << endl;

		brojBacanja++;

		bool isSame = true;
		for (int i = 0; i < BROJ_KOCKICA; i++) {
			if (ruka[i] != prethodnaRuka[i]) {
				isSame = false;
				break;
			}
		}

		if (isSame) {
			break;
		}

		for (int i = 0; i < BROJ_KOCKICA; i++) {
			prethodnaRuka[i] = ruka[i];
		}
	} while (true);

	return brojBacanja;
}