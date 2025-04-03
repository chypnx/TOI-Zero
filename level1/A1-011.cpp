#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    string text;
    cin >> text;

    map<char, int> chars;
    for (char i : text){
        chars[toupper(i)] += 1;
    }

    for (auto [ch, count] : chars) {
        cout << count << ch;
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