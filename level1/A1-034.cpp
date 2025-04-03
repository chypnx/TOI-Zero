#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int num, min = 9999999999999999;
    cin >> num ;

    for(int i = 0; i < num ; i++){
        int tempNum;
        cin >> tempNum;
        
        if (tempNum < min) min = tempNum;
    }
    
    cout << min;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}