#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int num;
    cin >> num;

    // floor first degit
    num /= 10;
    num *= 10;

    for (int i = 0; i < num; i++)
    {   
        if (num - i*10 >= 0){
            cout << num - i*10 << " ";
        }
    }

    if (num < 10){
        cout << '0';
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