#include <iostream>
using namespace std;

int main() {
    /*
        Ispisati brojeve od 1 do 100 koji su djeljivi sa 3 i sa 5 koristeći for petlju.
        Input: Nema
        Output: 15 30 45 60 ...
    */

    for(int i = 1; i <= 100; i++)
        (i%3 == 0 && i%5 == 0) && cout << i << " ";

    return 0;
}
