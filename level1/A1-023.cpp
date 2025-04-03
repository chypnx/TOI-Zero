#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int deg;
    char unit;

    cin >> deg >> unit;

    if (unit == 'C' || unit == 'c'){
        if (deg <= 0){
            cout << "solid";
        }else if (deg > 0 && deg < 100){
            cout << "liquid";
        }else{
            cout << "gas";
        }
    }else if (unit == 'F' || unit == 'f'){
        if (deg <= 32){
            cout << "solid";
        }else if (deg > 32 && deg < 212){
            cout << "liquid";
        }else{
            cout << "gas";
        }
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