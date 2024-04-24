#include<iostream>
using namespace std;

struct Osoba {
    int godiste;
    char ime[50];
    char prezime[50];

    // getters
    int getGodiste() {
        return godiste;
    }

    const char* getIme () {
        return ime;
    }

    const char* getPrezime () {
        return prezime;
    }

    // setters
    void setGodiste(int g) {
        godiste = g;
    }

    void setIme(const char* ime) {
        strcpy(this->ime, ime);
    }

    void setPrezime(const char* lastName) {
        strcpy(prezime, lastName);
    }

    //    void f() {
    //        (*this).ime;
    //        *this->prezime;
    //        cout << "Adresa objekta: " << this << endl;
    //        cout << "Ime objekta: " << this->ime << endl;
    //        cout << "Prezime objekta: " << (*this).prezime << endl;
    //        cout << "Godiste objekta: " << this->godiste << endl;
    //    }

    //    void Input(int godiste) {
    //        this->godiste = godiste;
    //    }

    void Unos() {
        cout << "Unesi godiste ";
        cin >> godiste;
        cin.ignore();
        cout << "Unesi ime ";
        cin.getline(ime, size(ime));
        cout << "Unesi prezime ";
        cin.getline(prezime, size(prezime));
        //        setGodiste(1987);
        //        setIme("Igor");
        //        setPrezime("Abdulovic");
    }

    void Ispis() {
        cout << "Ime i prezime " << getIme() << " " << getPrezime() << endl;
        cout << "Godiste " << getGodiste() << endl;
    }
};

//void func(Osoba a) {
//
//}
//
//void func1(Osoba& a) {
//    a.Unos();
//    a.Ispis();
//}

int main() {
        Osoba iggy;

    //    iggy.Unos();
    //    iggy.Ispis();
    //
    //    func(iggy);
    //    func1(iggy);

    //    Osoba osobe[3];
    //
    //    for (int i = 0; i < size(osobe); ++i) {
    //        cout << "-------------------------------------\n";
    //        cout << "Unesi podatke osobe na indeksu " << i << ":\n";
    //        osobe[i].Unos();
    //    }
    //
    //
    //    for (int i = 0; i < size(osobe); ++i) {
    //        cout << "-------------------------------------\n";
    //        cout << "Uneseni podaci osobe na indeksu " << i << ":\n";
    //        osobe[i].Ispis();
    //    }

    //    Osoba eminem;
    //    kreiranje statickog pokazivaca i init na nultu adresu
    //    Osoba* p = nullptr;
    //    init statickog pokazivaca na adresu lokalnog objekta
    //    p = &eminem;
    //    p->setIme("Marshall");
    //    p->setPrezime("Mathers");
    //    p->setGodiste(1972);
    //
    //    p->Ispis();

    //    Osoba* p = new Osoba; // dinamicki dio memorije - heap
    //
    //    p->setIme("Slim");
    //    p->setPrezime("Shady");
    //    p->setGodiste(1972);
    //
    //    p->Ispis();
    //
    //    delete p;

    //    int vel;
    //
    //    do {
    //        cout << "Unesi vel niza ";
    //        cin >> vel;
    //        cin.ignore();
    //    } while (vel < 1);
    //
    //    Osoba* p = new Osoba[vel];
    //
    //    for (int i = 0; i < vel; ++i) {
    //        cout << "------------------------------\n";
    //        cout << "Unesi podatke osobe na indeksu " << i << "\n";
    //        p[i].Unos();
    ////        (*(p + i)).Unos();  // aritmetika pokazivaca
    ////       (p + i)->Unos();
    //    }
    //
    //    for (int i = 0; i < vel; ++i) {
    //        cout << "------------------------------\n";
    //        cout << "Ispis podataka osobe na indeksu " << i << "\n";
    //        p[i].Ispis();
    //    }
    //
    //    delete[] p;
    //    p = nullptr;

    //    int** n = new int* [redovi];
    //
    //    for (int i = 0; i < redovi; ++i) {
    //        n[i] = new int[kolone];
    //    }

    int redovi, kolone;

    do {
        cout << "Unesi broj redova ";
        cin >> redovi;
        cout << "Unesi broj kolona ";
        cin >> kolone;
    } while (redovi < 1 || kolone < 1);

    // kreiranje statickog dvostrukog pokazivaca na dinamicki niz pokazivaca
    Osoba** p = new Osoba*[redovi];

    for (int i = 0; i < redovi; ++i) {
        p[i] = new Osoba[kolone]; // kreiranje dinamickog niza objekata
    }

    for (int i = 0; i < redovi; ++i) {
        for (int j = 0; j < kolone; ++j) {
            cout << "---------------------------\n";
            cout << "Unesi podatke za osobu na poziciji [" << i << "][" << j << "]:\n";
            p[i][j].Unos();
        }
    }


    for (int i = 0; i < redovi; ++i) {
        for (int j = 0; j < kolone; ++j) {
            cout << "---------------------------\n";
            cout << "Podaci za osobu na poziciji [" << i << "][" << j << "]:\n";
            p[i][j].Ispis();
        }
    }

    return 0;
}