#include <iostream>
using namespace std;

int main() {
//    Dvije uobičajene skale za mjerenje temperature su Fahrenheit i Celsius.
//    Tačka ključanja vode je 212˚F ill 100˚C. Tačka zamrzavanja vode je 32 ˚F ili 0˚C. Ako pretpostavimo da je odnos
//    između dvije skale moguće izraziti sljedećim izrazom F=9/5*C+32 napravite program koji će konvertirati
//    temperaturu izraženu u stupnjevima Celsiusa u temperaturu izraženu u stupnjevima Fahrenheita.
//    Pri izradi programa poštujte sve faze procesa programiranja

    float celsius = 0.0f;
    float fahrenheit;

    cout << "Unesite temperaturu u stepenima Celzijusa:" << endl;
    cin >> celsius;
    fahrenheit = ((float)9/5 * celsius) + 32;
    cout << "Temperatura u stepenima Farenhajta je: " << fahrenheit << endl;

    return 0;
}
