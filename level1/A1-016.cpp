#include <iostream>
using namespace std;

int main() {
    string id;
    cin >> id;

    // ตรวจว่าตำแหน่งที่ 2 และ 3 (index เริ่มที่ 0) เป็น '1' และ '6'
    if (id[2] == '1' && id[3] == '6') {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}
