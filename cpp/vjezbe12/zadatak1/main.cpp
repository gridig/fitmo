#include <iostream>
using namespace std;

int main() {
    int* statickiNizPokazivaca[5] = {nullptr};
    for (int i = 0; i < 5; ++i) {
        statickiNizPokazivaca[i] = new int(0);
    }

    for (int i = 0; i < 5; ++i) {
        cout << "Unesi vrijednost na lokaciju " << i << endl;
        cin >> *statickiNizPokazivaca[i];
    }

    for (int i = 0; i < 5; ++i) {
        cout << "Vrijednost na lokaciji " << i << " je " << *statickiNizPokazivaca[i] << endl;
    }

    for (int i = 0; i < 5; ++i) {
        delete statickiNizPokazivaca[i];
        statickiNizPokazivaca[i] = nullptr;
    }

    return 0;
}
