#include <iostream>
using namespace std;

/*
	-> funkcionalni kod (strukture, klase i utility funkcije)
	-> testni kod (unaprijed zadan)
*/

char* alocirajTekst(const char* tekst) {
	if (tekst == nullptr) {
		return nullptr;
	}
	int vel = strlen(tekst) + 1;
	char* novi = new char[vel];
	strcpy_s(novi, vel, tekst);
	return novi;
}

struct Datum {
	int* _dan{ nullptr }, * _mjesec{ nullptr }, * _godina{ nullptr };

	// user-defined konstruktor
	void setAll(int d, int m, int g) {
		setDan(d);
		setMjesec(m);
		setGodina(g);
	}

	// konstruktor kopije - objekt u cjelini
	void setAll(Datum& obj) {
		setDan(obj.getDan());
		setMjesec(obj.getMjesec());
		setGodina(obj.getGodina());
	}

	// konstruktor kopije - adresa objekta
	void setAll(Datum* obj) {
		setDan(obj->getDan());
		setMjesec(obj->getMjesec());
		setGodina(obj->getGodina());
	}

	// getters
	int getDan() {
		return (_dan == nullptr) ? 1 : *_dan;
	};
	int getMjesec() {
		return (_mjesec == nullptr) ? 1 : *_mjesec;
	};
	int getGodina() {
		return (_godina == nullptr) ? 2024 : *_godina;
	};

	// setters
	void setDan(int d) {
		if (d < 1 || d > 31) return;
		if (_dan == nullptr)
			_dan = new int;
		*_dan = d;
	};
	void setMjesec(int m) {
		if (m < 1 || m > 12) return;
		if (_mjesec == nullptr)
			_mjesec = new int;
		*_mjesec = m;
	};
	void setGodina(int g) {
		if (_godina == nullptr)
			_godina = new int;
		*_godina = g;
	};

	//void unos() {
	//	int d, m, g;
	//	cout << "Unesite dan, mjesec i godinu:";
	//	cin >> d >> m >> g;
	//	setAll(d, m, g);
	//}

	void ispis() {
		cout << getDan() << "." << getMjesec() << "." << getGodina() << endl;
	};

	void dealokacija() {
		delete _dan; _dan = nullptr;
		delete _mjesec; _mjesec = nullptr;
		delete _godina; _godina = nullptr;
	};

	int toInt() {
		return getGodina() * 365 + getMjesec() * 30 + getDan();
	};
};

bool areEqual(Datum& d1, Datum& d2) {
	return d1.toInt() == d2.toInt();
}

Datum& getStarijiDatum(Datum& d1, Datum& d2) {
	return (d1.toInt() > d2.toInt()) ? d2 : d1;
}

Datum& getNovijiDatum(Datum& d1, Datum& d2) {
	return (d1.toInt() > d2.toInt()) ? d1 : d2;
}

Datum* getNajstarijiDatum(Datum datumi[], int size) {
	Datum* temp = datumi; // &Datumi[0]
	for (int i = 0; i < size; i++)
		temp = &getStarijiDatum(*temp, datumi[i]);
	return temp;
}


Datum* getNajnovijiDatum(Datum datumi[], int size) {
	Datum* temp = datumi; // &Datumi[0]
	for (int i = 0; i < size; i++)
		temp = &getNovijiDatum(*temp, datumi[i]);
	return temp;
}

class Glumac {
	char _jmbg[14] = "";
	char* _ime = nullptr;
	char* _prezime = nullptr;
	Datum* _datumRodjenja = nullptr;
	char* _mjestoRodjenja = nullptr;
	char _drzava[100] = "";
	bool _spol;
public:
	const char* getJmbg() { return _jmbg; }
	const char* getIme() { return (_ime == nullptr) ? "" : _ime; }
	const char* getPrezime() { return (_prezime == nullptr) ? "" : _prezime; }
	Datum& getDatum() { return *_datumRodjenja; }
	const char* getMjestoRodjenja() { return (_mjestoRodjenja == nullptr) ? "" : _mjestoRodjenja; }
	const char* getDrzava() { return _drzava; }
	bool getSpol() { return _spol; }

	void setJmbg(const char* jmbg) {
		strcpy_s(_jmbg, sizeof(_jmbg), jmbg);
	}
	void setIme(const char* ime) {
		delete[] _ime;
		_ime = alocirajTekst(ime);
	}
	void setPrezime(const char* prezime) {
		delete[] _prezime;
		_prezime = alocirajTekst(prezime);
	}
	void setDatumRodjenja(Datum& obj) {
		// code
	}
	void setMjestoRodjenja(const char* mjestoRodjenja) {
		delete[] _mjestoRodjenja;
		_mjestoRodjenja = alocirajTekst(mjestoRodjenja);
	}
	void setDrzava(const char* drzava) {
		strcpy_s(_drzava, sizeof(_drzava), drzava);
	}
	void setSpol() {
		// code
	}
};

void zadatak1() {
	//Datum prviMaj;
	//prviMaj.setAll(1, 5, 2024);

	//Datum mayTheFourth;
	//mayTheFourth.setAll(4, 5, 2024);

	//Datum prviPetog;
	//prviPetog.setAll(prviMaj);
	//prviPetog.setAll(&prviMaj);

	//cout << "prviPetog" << endl;
	//prviPetog.ispis();

	//cout << "prviMaj" << endl;
	//prviMaj.ispis();

	//cout << "mayTheFourth" << endl;
	//mayTheFourth.ispis();

	//areEqual(prviMaj, mayTheFourth) ? cout << "Jesu isti" << endl : cout << "Nisu isti" << endl;

	//cout << "Stariji datum: ";
	//getStarijiDatum(prviMaj, mayTheFourth).ispis();

	//cout << "Noviji datum: ";
	//getNovijiDatum(prviMaj, mayTheFourth).ispis();

	//prviPetog.dealokacija();
	//prviMaj.dealokacija();
	//mayTheFourth.dealokacija();

	Datum danD, operacijaBarbarossa, sarajevskiAtentat, apolloSlijetanje, blackThursday;
	danD.setAll(6, 6, 1944);
	operacijaBarbarossa.setAll(22, 6, 1941);
	sarajevskiAtentat.setAll(28, 6, 1914);
	apolloSlijetanje.setAll(24, 7, 1969);
	blackThursday.setAll(24, 10, 1929);

	Datum historijskiDogadjaji[5];

	historijskiDogadjaji[0].setAll(danD);

	cout << "Najstariji datum: ";
	getNajstarijiDatum(historijskiDogadjaji, size(historijskiDogadjaji))->ispis();
	cout << "Najnoviji datum: ";
	getNajnovijiDatum(historijskiDogadjaji, size(historijskiDogadjaji))->ispis();


	danD.dealokacija();
	operacijaBarbarossa.dealokacija();
	sarajevskiAtentat.dealokacija();
	apolloSlijetanje.dealokacija();
	blackThursday.dealokacija();

	for (int i = 0; i < size(historijskiDogadjaji); i++)
		historijskiDogadjaji[i].dealokacija();
}


void zadatak2() {

	cout << "z2";
}

void zadatak3() {
	cout << "z3";
}

void menu() {
	int nastaviDalje = 1;
	while (nastaviDalje == 1) {
		int izbor = 0;

		do {
			system("cls");

			cout << "Koji zadatak zelite raditi: " << endl;
			cout << "(1) Zadatak 1: " << endl;
			cout << "(2) Zadatak 2: " << endl;
			cout << "(3) Zadatak 3: " << endl;
			cin >> izbor;
			cout << endl;
		} while (izbor < 1 || izbor > 3);

		switch (izbor) {
		case 1: zadatak1(); cout << "Done." << endl; break;
		case 2: zadatak2(); cout << "Done." << endl; break;
		case 3: zadatak3(); cout << "Done." << endl; break;
		default:break;
		}
		do {
			cout << "Nastavi dalje? (1/0)";
			cin >> nastaviDalje;
		} while (nastaviDalje < 0 || nastaviDalje > 1);
	}
}

int main()
{
	menu();

	return 0;
}