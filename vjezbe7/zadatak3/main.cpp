#include <iostream>
using namespace std;

int countDigits(int x);
bool isValid(int b);
int operation(int b1, int b2);

int main() {
    int b1, b2;
    do {
        cout << "Unesite b1: ";
        cin >> b1;
        cout << "Unesite b2: ";
        cin >> b2;
    } while ((!isValid(b1) || !isValid(b2)) || (countDigits(b1) != countDigits(b2)));
    cout << operation(b1, b2);
    return 0;
}

int countDigits(int x) {
    return (int)log10(x) + 1;
}

bool isValid(int b) {
    while (b > 0) {
        if (b % 10 > 1) return false;
        b /= 10;
    }
    return true;
}

int operation(int b1, int b2) {
    int result = 0;
    int nd = countDigits(b1);
    for (int i = 0; i < nd; i++) {
        int p = b1 % 10;
        int q = b2 % 10;
        result += ((!p || q) && (p || !q)) * (int) pow(10, i);
        b1 /= 10;
        b2 /= 10;
    }
    return result;
}
