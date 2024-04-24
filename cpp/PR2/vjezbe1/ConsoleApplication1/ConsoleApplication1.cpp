#include <iostream>
using namespace std;

const int maxChar = 20;

class Osoba {
	char _krvnaGrupa[6];
protected:
	char _ime[maxChar];
	char _prezime[maxChar];
	char _email[maxChar];
public:
	virtual void Info() {
		cout << "Ime: " << _ime << endl;
		cout << "Prezime: " << _prezime << endl;
		cout << "Email: " << _email << endl;
	}
};
class Student : public Osoba {
	int _indeks;
	int _semestar;
public:
	void Info() {
		cout << "Ime: " << _ime << endl;
		cout << "Prezime: " << _prezime << endl;
		cout << "Email: " << _email << endl;
		cout << "Indeks: " << _indeks << endl;
		cout << "Semestar: " << _semestar << endl;
	}
};
class Asistent : public Osoba {
	char* _predmeti[5];
public:
	void Info() {
		cout << "Ime: " << _ime << endl;
		cout << "Prezime: " << _prezime << endl;
		cout << "Email: " << _email << endl;
	}
};
class Profesor : public Asistent {
	char _titula[maxChar];
public:
	void Info() {
		cout << "Ime: " << _ime << endl;
		cout << "Prezime: " << _prezime << endl;
		cout << "Email: " << _email << endl;
	}
};
class AdministrativnoOsoblje : public Osoba {
	char _pozicija[maxChar];
};

/*
	enkalsulacija - encapsulation
	apstrakcija - abstraction
	nasljedjivanje - inheritance
	polimorfizam - polymorphism
*/

int main()
{
	Student igor;
	igor.Info();

	Osoba* o = new Asistent();
	o->Info();
	o = new Profesor();
	o->Info();

	return 0;
}