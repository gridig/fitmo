#include <iostream>
using namespace std;

const int MAX_DUZINA_LINIJE = 200;

int main() {
    char* texts[5] = {nullptr};

    for (int i = 0; i < size(texts); ++i) {
        char temp[MAX_DUZINA_LINIJE + 1];
        cout << "Unesi tekst: " << endl;
        cin.getline(temp, size(texts) + 1);

        int length = strlen(temp) + 1;
        texts[i] = new char(length);
        strcpy_s(texts[i], length, temp);
        texts[i] = temp;
    }

    for (int i = 0; i < size(texts); ++i) {
        cout << "Tekst " << i << ": " << texts[i] << endl;
    }

    for (int i = 0; i < size(texts); ++i) {
        delete[] texts[i];
        texts[i] = { nullptr };
    }

    return 0;
}
