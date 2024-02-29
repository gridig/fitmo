#include <iostream>
using namespace std;

const int rows = 8, columns = 8;
void inicijalizirajTabelu(int[][columns]);
void ispisiTabelu(int[][columns]);
int getBrojCifara(int);
float getProsjek(int[][columns]);

int main() {
    int tabela[rows][columns];
    inicijalizirajTabelu(tabela);
    ispisiTabelu(tabela);
    cout << "Prosjek je: " << "\n" << getProsjek(tabela) << endl;

    return 0;
}

int getBrojCifara(int broj) {
    int brojac = 0;

    while (broj > 0) {
        broj /= 10;
        brojac++;
    }
    return brojac;
}

void inicijalizirajTabelu(int tabela[][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if ((i + j) % 2 == 0) {
                do {
                    tabela[i][j] = rand() % 10000;
                } while (tabela[i][j] % 2 != 0 || getBrojCifara(tabela[i][j]) % 2 == 0);
            } else {
                do {
                    tabela[i][j] = rand() % 10000;
                } while (tabela[i][j] % 2 == 0 || getBrojCifara(tabela[i][j]) % 2 != 0);
            }
        }
    }
}

void ispisiTabelu(int tabela[][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << tabela[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

float getProsjek(int tabela[][columns]) {
    float prosjek = 0;
    int brojac = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if(i==j) {
                prosjek += tabela[i][j];
                cout << tabela[i][j] << "\t";
                brojac++;
            } else {
                cout << "*" << "\t";
            }
        }
        cout << endl;
    }
    return prosjek/brojac;
}