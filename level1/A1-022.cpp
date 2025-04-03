#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int date, month;
    cin >> date >> month;

    if (month == 12 || month == 1){
        if (((month == 12 ) && (date >= 22)) || (month == 1 ) && (date <= 19)) cout << "capricorn";
    }
    if (month == 1 || month == 2){
        if (((month == 1 ) && (date >= 20)) || (month == 2 ) && (date <= 18)) cout << "aquarius";
    }
    if (month == 2 || month == 3){
        if (((month == 2 ) && (date >= 19)) || (month == 3 ) && (date <= 20)) cout << "pisces";
    }
    if (month == 3 || month == 4){
        if (((month == 3 ) && (date >= 21)) || (month == 3 ) && (date <= 19)) cout << "aries";
    }
    if (month == 4 || month == 5){
        if (((month == 4 ) && (date >= 20)) || (month == 5 ) && (date <= 20)) cout << "taurus";
    }
    if (month == 5 || month == 6){
        if (((month == 5 ) && (date >= 21)) || (month == 6 ) && (date <= 21)) cout << "gemini";
    }
    if (month == 6 || month == 7){
        if (((month == 6 ) && (date >= 22)) || (month == 7 ) && (date <= 22)) cout << "cancer";
    }
    if (month == 7 || month == 8){
        if (((month == 7 ) && (date >= 23)) || (month == 8 ) && (date <= 22)) cout << "leo";
    }
    if (month == 8 || month == 9){
        if (((month == 8 ) && (date >= 23)) || (month == 9 ) && (date <= 22)) cout << "virgo";
    }
    if (month == 9 || month == 10){
        if (((month == 9 ) && (date >= 23)) || (month == 10 ) && (date <= 23)) cout << "libra";
    }
    if (month == 10 || month == 11){
        if (((month == 10 ) && (date >= 24)) || (month == 11 ) && (date <= 21)) cout << "scorpio";
    }
    if (month == 11 || month == 12){
        if (((month == 11 ) && (date >= 22)) || (month == 12 ) && (date <= 21)) cout << "sagittarius";
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}