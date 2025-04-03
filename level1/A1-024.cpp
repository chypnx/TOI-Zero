#include <iostream>
using namespace std;

int main() {
    int year, cc;
    cin >> year >> cc;

    int tax = 0;

    if (year <= 1990) {
        if (cc <= 1500) tax = 1250;
        else if (cc <= 2000) tax = 1400;
        else tax = 2000;
    } else if (year <= 1999) {
        if (cc <= 1500) tax = 1100;
        else if (cc <= 2000) tax = 1300;
        else tax = 1700;
    } else { // year >= 2000
        if (cc <= 1500) tax = 1000;
        else if (cc <= 2000) tax = 1200;
        else tax = 1500;
    }

    cout << tax;
    return 0;
}
