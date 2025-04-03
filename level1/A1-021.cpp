#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    bool isLeap = false;

    if (year < 1582) {
        isLeap = (year % 4 == 0);
    } else {
        if (year % 400 == 0) {
            isLeap = true;
        } else if (year % 100 == 0) {
            isLeap = false;
        } else if (year % 4 == 0) {
            isLeap = true;
        }
    }

    if (isLeap) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}
