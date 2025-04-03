#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

int fac(int x){
    int num;
    (x > 1) ? num = x * fac(x-1) : num = x; 
    if (num == 0)num = 1;
    
    return num;
}

void solve() {
    int num;
    cin >> num;

    cout << fac(num);
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}