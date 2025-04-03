#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    string text; // --> taC
    cin >> text;

    reverse(text.begin(), text.end());

    string newText;  // --> tac
    for(char c : text){
        newText += tolower(c);
    }

    cout << newText;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}