#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    string num, newNum;
    cin >> num;

    int position = 1;
    for (int i = num.size() - 1; i >= 0; i--){
        newNum += num[i]; 
        if (position % 3 == 0 && position != num.size()) newNum += ',';
        position++;
    }
    reverse(newNum.begin(),newNum.end());
    cout << newNum;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}