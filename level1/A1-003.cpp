#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cin >> num1; cin >> num2; cin >> num3;
    int max = num1;

    if (num2 > num1 && num2 > num3) max = num2;
    if (num3 > num1 && num3 > num2) max = num3;
    
    cout << max;

    return 0;
}