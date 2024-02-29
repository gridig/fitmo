#include <iostream>
using namespace std;

int sortDigits(int, bool);
bool areAllDigitsSame(int);
int kaprekarOperation(int);

int main() {
    int number;

    do {
        cout << "Unesi 4-cifreni broj: ";
        cin >> number;
    } while (areAllDigitsSame(number) || (number < 1000 || number > 9999));

    int iterations = kaprekarOperation(number);

    cout << "Kaprekarova konstanta (6174) dobijena u " << iterations << " iteracija." << endl;

    return 0;
}

int sortDigits(int num, bool ascendingOrder) {
    int digits[4];
    for (int i = 0; i < 4; ++i) {
        digits[i] = num % 10;
        num /= 10;
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3 - i; ++j) {
            if (ascendingOrder) {
                if (digits[j] > digits[j + 1]) {
                    int temp = digits[j];
                    digits[j] = digits[j + 1];
                    digits[j + 1] = temp;
                }
            } else {
                if (digits[j] < digits[j + 1]) {
                    int temp = digits[j];
                    digits[j] = digits[j + 1];
                    digits[j + 1] = temp;
                }
            }
        }
    }

    int result = 0;
    for (int i = 0; i < 4; ++i) {
        result = result * 10 + digits[i];
    }
    return result;
}

bool areAllDigitsSame(int num) {
    int lastDigit = num % 10;
    while (num > 0) {
        if (num % 10 != lastDigit) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int kaprekarOperation(int num) {
    int count = 0;
    while (num != 6174) {
        int ascending = sortDigits(num, true);
        int descending = sortDigits(num, false);
        num = descending - ascending;
        cout << descending << " - " << ascending << " = " << num << endl;
        count++;
    }
    return count;
}