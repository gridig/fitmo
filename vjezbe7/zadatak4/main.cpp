#include <iostream>
using namespace std;

bool isValid(int);
int binaryToDecimal(int);

int main() {
    int n, b, maxB = 0;
    do {
        cout << "Unesite n: ";
        cin >> n;
    } while (n <= 1);

    for (int i = 1; i <= n; i++) {
        do {
            cout << "Unesite b[" << i << "]: \n";
            cin >> b;
        } while (!isValid(b));

        if (maxB <= b) maxB = b;
    }

    cout << "Max b je: " << maxB << endl;
    cout << "Decimalni b je: " << binaryToDecimal(maxB) << endl;

    return 0;
}

bool isValid(int x) {
    while (x > 0) {
        if (x % 10 > 1) return false;
        x /= 10;
    }
    return true;
}


int binaryToDecimal(int x) {
    int dec = 0;
    int counter = 0;
    while (x > 0) {
        dec += (x % 10) * pow(2, counter);
        x /= 10;
        counter++;
    }
    return dec;
}
