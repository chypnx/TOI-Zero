#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int star;
    cin >> star;

    for (int i = 0; i < star; i++){
        cout << '*';
    } cout << '\n';

    if (star-2 > 0)
    {
        for (int i = 0; i < star-2; i++){
            cout << '*';
        } cout << '\n';
        
        if (star-4 > 0)
        {
            for (int i = 0; i < star-4; i++){
                cout << '*';
            }
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