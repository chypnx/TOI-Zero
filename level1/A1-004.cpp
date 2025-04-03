#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int normal, mid, finals;

    cin >> normal >> mid >> finals;
    string result = (normal < 5 || mid < 20 || finals < 25) ? "fail" : "pass";
    cout << result;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}