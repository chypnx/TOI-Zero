#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int minimum = a;

    if (b < minimum) {
        minimum = b;
    }
    if (c < minimum) {
        minimum = c;
    }

    cout << minimum;
    return 0;
}
