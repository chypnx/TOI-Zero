#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int input;
    cin >> input;
    if (input >= 1000 && input <= 9999){

        string newInput = to_string(input);
        reverse(newInput.begin(), newInput.end());

        cout << newInput;
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