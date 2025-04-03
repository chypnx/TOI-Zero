#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int num;
    cin >> num;
    
    for (size_t i = 1; i <= num; i++)
    {
        if (i%5==0)
        {
            cout << "X";
        }
        else
        {
            cout << "*";
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