#include<iostream>
using namespace std;

bool isLeap(int y) {
    return ((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0);
}
int getDaysTotal(int m, int y) {
    switch (m)
    {
        case 2:
            return isLeap(y) ? 29 : 28;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        default:
            return 30;
    }
}
bool isValid(int d, int m, int y) {
    if (d < 1 || d > 31 || m < 1 || m > 12 || y < 1)
        return false;
    return  d <= getDaysTotal(m, y);
}

int main()
{
    int d, m, y;
    do {
        cout << "Unesite dan:" << endl;
        cin >> d;
        cout << "Unesite mjesec:" << endl;
        cin >> m;
        cout << "Unesite godinu:" << endl;
        cin >> y;
    } while (!isValid(d, m, y));

    int dayIndex = 0;
    for (int i = 1; i <= m; i++)
    {
        if (i != m)
            dayIndex += getDaysTotal(i, y);
        else
            dayIndex += d;
    }
    cout << "Uneseni datum je " << dayIndex << " dan u godini." << endl;
    return 0;
}