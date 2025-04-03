#include <iostream>
using namespace std;

int main() {
    string name, surname;
    int age;
    cin >> name >> surname >> age;
    string password;

    if (name.length() > 5 && surname.length() > 5) {
        password += name.substr(0, 2);
        password += surname[surname.length() - 1];
        password += to_string(age).back();
    } else {
        password += name[0];
        password += to_string(age);
        password += surname[surname.length() - 1];
    }
    cout << password;

    return 0;
}
