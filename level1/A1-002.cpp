#include <iostream>
using namespace std;

int main(){
    int coin10 = 0, coin5 = 0, coin2 = 0, coin1 = 0;
    int amount;
    cin >> amount;

    // try to cash back
    while (amount != 0){
        if (amount >= 10){
            amount -= 10; coin10++;
        } else if (amount >= 5){
            amount -= 5; coin5++;
        } else if (amount >= 2){
            amount -= 2; coin2++;
        } else if (amount > 0){
            amount -= 1; coin1++;
        }
    }
    
    cout << "10 = " << coin10 << "\n";
    cout << "5 = " << coin5 << "\n";
    cout << "2 = " << coin2 << "\n";
    cout << "1 = " << coin1 << "\n";
    
    
    return 0;
}