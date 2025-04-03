#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int num;
    char opa;

    cin >> num >> opa;
    
    int oldNum = num;
    int revNum = 0;
    while (num > 0){
        revNum = (revNum * 10) + num%10;
        num /= 10;
    }

    int newNum;
    if (opa == '+') newNum = oldNum + revNum;
    if (opa == '*') newNum = oldNum * revNum;
    
    // cout << revNum;
    cout << oldNum << " " << opa << " " << revNum << " = " << newNum;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}