#include <iostream>
using namespace std;

int main() {
    int mid, final;
    cin >> mid >> final;  // รับคะแนนกลางภาค และปลายภาค

    int total = mid + final;  // รวมคะแนนทั้งสองส่วน
    cout << total << endl;

    if (total >= 50) {
        cout << "pass";
    } else {
        cout << "fail";
    }

    return 0;
}
