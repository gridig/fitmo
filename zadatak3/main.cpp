#include <iostream>
using namespace std;

int main() {
//    Napisati program koji omogućava korisniku da unese udaljenost u kilometrima. Nakon unosa, program treba da izračuna i ispiše ekvivalentnu udaljenost u miljama.
//    Input: udaljenost (km) [float]
//    Output: udaljenost (mi) [float]

    float km = 0.0f;
    float mi;
    const float conversionRate = 0.621;

    cout << "Unesite udaljenost u kilometrima:" << endl;
    cin >> km;
    mi = km*conversionRate;
    cout << "Udaljenost u miljama je: " << mi << endl;

    return 0;
}
