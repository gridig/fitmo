#include <iostream>
using namespace std;

class Datum {
	int _dan, _mjesec, _godina;
public:
	Datum(int dan = 1, int mjesec = 1, int godina = 1900) {
		_dan = dan;
		_mjesec = mjesec;
		_godina = godina;
	}
	void Info() {
		cout << _dan << "." << _mjesec << "." << _godina << endl;
	}
};

class Student {
	const int _indeks;
	int& _grupaNaNastavi;
	Datum _datumRodjenja;
public:
	Student(int indeks, int& grupaNaNastavi, int dan, int mjesec, int godina)
		: _indeks(indeks), _grupaNaNastavi(grupaNaNastavi), _datumRodjenja(dan, mjesec, godina) {

	}
	void Info() {
		cout << "Indeks: " << _indeks << ", Grupa: " << _grupaNaNastavi << endl;
	}
};

char* AlocirajNizKaraktera(const char* sadrzaj) {
	if (sadrzaj == nullptr)
		return nullptr;
	char* temp = new char[strlen(sadrzaj) + 1];
	strcpy_s(temp, strlen(sadrzaj) + 1, sadrzaj);
	return temp;
}

class Predmet {
	char* _naziv;
	int _semestar;
public:
	Predmet(const char* naziv, int semestar = 1) {
		_naziv = AlocirajNizKaraktera(naziv);
		_semestar = semestar;
	}
	Predmet(Predmet & original) {
		_semestar = original._semestar;
		_naziv = AlocirajNizKaraktera(original._naziv);
	}
	~Predmet() {
		delete[] _naziv; _naziv = nullptr;
	}
	void Info() {
		cout << _naziv << " " << _semestar << endl;
	}
};

int main() {
	int a = 10;
	Predmet prII = "Programiranje II";
	Predmet prIIv2(prII);

	prII.Info();
	prIIv2.Info();

	return 0;
}