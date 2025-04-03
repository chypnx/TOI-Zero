#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int num, total = 0;
    while (1){
        cin >> num;
        if (num == 1) {
            total += 100;
        } else if (num == 2) {
            total += 120;
        } else if (num == 3) {
            total += 200;
        } else if (num == 4) {
            total += 60;
        } else if (num == 5){
            cout << "Bye Bye" << "\n";
            cout << "Total Calories: " << total;
            break;
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