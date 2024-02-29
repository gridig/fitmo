#include <iostream>
using namespace std;

bool jeSavrsen(int);

int main()
{
	int x, y, brojSavrsenih = 0;

	cout << "Unesi granice intervala x i y: ";
	cin >> x >> y;

	double sumaSavrsenih = 0;
	for (int i = x; i <=y; i++)
	{
		if (jeSavrsen(i))
		{
			cout << "Savrseni broj je: " << i << endl;
			sumaSavrsenih += i;
			brojSavrsenih += 1;
		}
	}

	cout << "Aritmeticka sredina savrsenih brojeva iz zadatog intervala je: " << sumaSavrsenih / brojSavrsenih << endl;
	

	system("pause");
	return 0;
}

bool jeSavrsen(int n) {
	int zbir = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0) zbir += i;
	}
	return n == zbir;
}