#include <iostream>
#include <string>
using namespace std;

int main() {
    string id;
    cin >> id;  // รับรหัสประชาชนเป็น string เพื่อให้รองรับเลขเยอะๆ

    if (id.length() == 13) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}
