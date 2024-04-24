#include <iostream>
using namespace std;

int main() {
    int** pp = new int*;

    *pp = new int;

    **pp = 42;

    cout << **pp << endl;

    delete* pp;
    delete pp;
    pp = nullptr;

    return 0;
}
