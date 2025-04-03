#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int num1, num2, num3;
    int even = 0, odd = 0;

    cin >> num1 >> num2 >> num3;

    (num1 % 2 == 0) ? even++ : odd++;
    (num2 % 2 == 0) ? even++ : odd++;
    (num3 % 2 == 0) ? even++ : odd++;
    
    cout << "even " << even << "\n";
    cout << "odd " << odd;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}