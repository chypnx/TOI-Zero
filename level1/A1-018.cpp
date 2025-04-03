#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num < 0) {
        cout << "Error : Please input positive number";
    } else if (num == 0 || num > 9) {
        cout << "Error : Out of range";
    } else {
        string roman[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        cout << roman[num];
    }
    
    return 0;
}
