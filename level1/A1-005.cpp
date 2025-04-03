#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int month, date;
    cin >> month >> date;

    string season;

    if (month <= 3){(month %3 == 0) ? (date < 21) ? season = "winter" : season = "spring" : season = "winter";}
    else if (month <= 6){(month %3 == 0) ? (date < 21) ? season = "spring" : season = "summer" : season = "spring";}
    else if (month <= 9){(month %3 == 0) ? (date < 21) ? season = "summer" : season = "fall" : season = "summer";}
    else if (month <= 12){(month %3 == 0) ? (date < 21) ? season = "fall" : season = "winter" : season = "fall";}
    
    cout << season;
    
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}