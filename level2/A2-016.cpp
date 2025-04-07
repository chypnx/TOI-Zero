#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    string lottery, buy;
    getline(cin, lottery);
    getline(cin, buy);

    string lotChar, buyChar;
    int lotNum, buyNum;

    istringstream(lottery) >> lotChar >> lotNum;
    istringstream(buy) >> A2-019buyChar >> buyNum;

    if (lotChar == buyChar && lotNum == buyNum) {
        cout << 1000000;
    } else if (lotNum == buyNum) {
        cout << 100000;
    } else if (lotChar == buyChar && lotNum % 1000 == buyNum % 1000) {
        cout << 2000;
    } else if (lotChar == buyChar && lotNum % 100 == buyNum % 100) {
        cout << 1000;
    } else if (lotNum % 1000 == buyNum % 1000) {
        cout << 200;
    } else if (lotNum % 100 == buyNum % 100) {
        cout << 100;
    } else if (lotChar == buyChar) {
        cout << 20;
    } else {
        cout << 0;
    }
}
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    solve();
    return 0;
}
