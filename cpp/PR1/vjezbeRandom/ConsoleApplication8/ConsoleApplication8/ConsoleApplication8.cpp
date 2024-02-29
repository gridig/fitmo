#include <iostream>
using namespace std;

int zamijeniParne(int);

int main()
{
    int n;

    do {
        cout << "Unesi pozitivan broj ";
        cin >> n;
    } while (n <= 0);

    cout << zamijeniParne(n) << endl;
    cout << n - zamijeniParne(n) << endl;

    system("pause");
    return 0;
}

int zamijeniParne(int n) {
    int m = 0;
    int temp = 0;
    int brojac = 0;

    do {
        m = n % 10;
        if (m % 2 == 0) m = 5;
        temp += (m * pow(10, brojac));
        n /= 10;
        ++brojac;
    } while (n > 0);

    return temp;
}