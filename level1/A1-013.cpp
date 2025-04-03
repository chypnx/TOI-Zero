#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    char fors;
    int pass;

    cin >> fors >> pass;
    if (fors == 'H'){
        if (pass == 4567){
            cout << "safe unlocked";
        }else{
            cout << "safe locked - change digit";
        } 
    }else {
        if (pass == 4567){
            cout << "safe locked - change char";
        }else{
            cout << "safe locked";
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