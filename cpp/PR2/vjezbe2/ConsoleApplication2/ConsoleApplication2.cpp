#include <iostream>
using namespace std;

class Datum {
	int _dan, _mjesec, _godina;
	int PrestupnaGodina(int godina) {
		return godina % 4 == 0 && (godina % 100 != 0 || godina % 400 == 0);
	}
	int GetPosljednjiDanUMjesecu(int mjesec, int godina) {
		if (mjesec == 2) return 28 + PrestupnaGodina(godina);
		if (mjesec == 4 || mjesec == 6 || mjesec == 9 || mjesec == 11) return 30;
		return 31;
	}
	bool ValidanDatum(int dan, int mjesec, int godina) {
		if (dan <1 || dan > GetPosljednjiDanUMjesecu(mjesec, godina) || mjesec < 1 || mjesec > 12 || godina < 1900)
			return false;
		return true;
	}
	void SetDatum(int dan, int mjesec, int godina) {
		_dan = dan;
		_mjesec = mjesec;
		_godina = godina;
	}
	tm GetTrenutniDatumIVrijeme(){
		tm datum;
		time_t trenutno = time(nullptr);
		cout << localtime_s(&datum, &trenutno);
		return datum;
	}
	void SetTrenutniDatum() {
		tm trenutno = GetTrenutniDatumIVrijeme();
		SetDatum(trenutno.tm_mday, trenutno.tm_mon + 1, trenutno.tm_year + 1900);
	}
public:
	Datum(int dan = 1, int mjesec = 1, int godina = 1900) {
		if (ValidanDatum(dan, mjesec, godina)) {
			SetDatum(dan, mjesec, godina);
		}
		else SetTrenutniDatum();

	}
	~Datum() {

	}
	char* ToString() {
		const int max = 15;
		char temp[max];
		char* datum = new char[max];

		_itoa_s(_dan, temp, 10);
		strcpy_s(datum, max, temp);
		strcat_s(datum, max, ".");
		_itoa_s(_mjesec, temp, 10);
		strcat_s(datum, max, temp);
		strcat_s(datum, max, ".");
		_itoa_s(_godina, temp, 10);
		strcat_s(datum, max, temp);
		strcat_s(datum, max, ".");
		return datum;
	}
	void DodajDane(int brojDana) {
		if (ValidanDatum(_dan + brojDana, _mjesec, _godina) && brojDana > 0) {
			_dan += brojDana;
			return;
		}
		while (brojDana > 0) {
			int preostalo = GetPosljednjiDanUMjesecu(_mjesec, _godina) - _dan + 1;
			if (brojDana > preostalo) {
				_mjesec++;
				_dan = 1;
				brojDana -= preostalo;
				if (_mjesec > 12) {
					_mjesec = 1;
					_godina++;
				}
			}
			else {
				_dan += brojDana;
				brojDana = 0;
			}
		}
	}
};

int main()
{
	int brojDana = 0;

	do {
		Datum danas(4, 3, 2024);
		cout << "Broj dana -> ";
		cin >> brojDana;
		danas.DodajDane(brojDana);
		char* str = danas.ToString();
		cout << str << endl;
		delete[] str;
	} while (brojDana > 0);


	return 0;
}
