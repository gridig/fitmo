#include <iostream>
#include <iomanip>
using namespace std;


int main() {
//    for (int i = 1; i <= 10; i++) {
//        for (int j = 1; j <= 10; j++) {
//            cout << setw(5) << j * i;
//        }
//        cout << endl;
//    }

    int num = 3415;
    num += 123;
    num -= 33;
    num /= 74;
    num %= 14;
    cout << num << endl;

    return 0;
}