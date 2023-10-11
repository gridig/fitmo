#include <iostream>
using namespace std;

int main() {
//    Napisati program koji omogućava korisniku da unese poluprečnik (radijus) kruga.
//    Nakon unosa, program treba da izračuna i ispiše obim i površinu kruga na osnovu unesenog poluprečnika.
//    Input: r [float]
//    Output: obim [float], povrsina [float]

    const float pi = 3.14f;
    float r = 0.0f;

    cout << "Unesite poluprecnik kruga: " << endl;
    cin >> r;
    cout << "Obim kruga je: " << 2 * r * pi << endl;
    cout << "Povrsina kruga je: " << pow(r,2) * pi << endl;

    return 0;
}
