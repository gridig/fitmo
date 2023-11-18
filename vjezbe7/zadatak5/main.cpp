#include <iostream>
using namespace std;

bool isLeap(int y) { return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)); }

int getDaysTotal(int m, int y) {
    switch (m) {
        case 2:
            return isLeap(y) ? 29 : 28;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        default:
            return 30;
    }
}

bool isValid(int d, int m, int y) {
    if (d < 1 || d > 31 || m < 1 || m > 12 || y < 1) return false;
    return d <= getDaysTotal(m, y);
}

bool isOlder(int d1, int m1, int y1, int d2, int m2, int y2) {
    int brojDana1 = y1 * 365 + m1 * 30 + d1;
    int brojDana2 = y2 * 365 + m2 * 30 + d2;
    return brojDana1 < brojDana2;
}

int main() {
    int d, m, y;
    int oDay = 31, oMonth = 12, oYear = 10000;
    for (int i = 0; i < 3; i++) {
        do {
            cout << "Unesite dan: ";
            cin >> d;
            cout << "Unesite mjesec: ";
            cin >> m;
            cout << "Unesite godinu: ";
            cin >> y;
        }
        while (isValid(d, m, y) == false);
        if (isOlder(d, m, y, oDay, oMonth, oYear)) {
            oDay = d;
            oMonth = m;
            oYear = y;
        }
    }
    cout << "Najstariji datum od unesena tri je: " << oDay << "." << oMonth << "." << oYear << endl;
    return 0;
}
