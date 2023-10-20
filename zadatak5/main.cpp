#include <iostream>
using namespace std;

int main() {
//    Satnica u automehaničarskoj radionici iznosi 35 KM (bez PDV). Ukoliko se u program unese
//    cijena dijelova i broj radnih sati omogućite izračun ukupnih troškova popravke automobila i
//    ispis odgovarajućeg računa. Prilikom izračuna troškova ne zaboravite obračunati PDV (17%).
//    Ispis uredite da izgleda što je sličnije moguće pravom fiskalnom računu (naziv
//    automehaničara, sjedište, sve stavke pojedinačno na računu, porez, ukupno).

    const int satnica = 35;
    const int pdv = 17;
    const auto now = chrono::system_clock::now();
    const time_t t_c = chrono::system_clock::to_time_t(now);
    int satiUkupno;
    string dioNaziv;
    int dioKolicina;
    float dioCijena = 0.0f;


    cout << "------Dijelovi------" << endl;
    cout << "Unesite naziv dijela" << endl;
    cin >> dioNaziv;
    cout << "Unesite kolicinu" << endl;
    cin >> dioKolicina;
    cout << "Unesite cijenu pojedinacnog dijela" << endl;
    cin >> dioCijena;
    cout << "--------Rad---------" << endl;
    cout << "Unesite broj radnih sati" << endl;
    cin >> satiUkupno;
    cout << "" << endl;
    cout << "" << endl;
    cout << "------------------------------" << endl;
    cout << "Ispis fiskalnog racuna:" << endl;
    cout << "------------------------------" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "------------------------------" << endl;
    cout << "      Auto servis \"LOUD\"" << endl;
    cout << "      Vl. Igor Abdulovic" << endl;
    cout << "       Kasima Prohica 6" << endl;
    cout << "        71000 Sarajevo" << endl;
    cout << "------------------------------" << endl;
    cout << "JIB: 4565676787890" << endl;
    cout << "PIB: 000000000000" << endl;
    cout << "IBFM: DR061CA" << endl;
    cout << "------------------------------" << endl;
    cout << "        FISKALNI RACUN" << endl;
    cout << "BF: 2" << endl;
    cout << ctime(&t_c) << flush;
    cout << "------------------------------" << endl;

    cout << "------------------------------" << endl;
    return 0;
}
