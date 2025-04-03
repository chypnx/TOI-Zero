#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

// print vector
template<typename T>
void printVector(const vector<T>& v) {
    for (const auto& x : v) cout << x << ' ';
    cout << '\n';
}

// print pair
template<typename A, typename B>
void printPair(const pair<A, B>& p) {
    cout << '(' << p.first << ',' << p.second << ')';
}

// print set
template<typename T>
void printSet(const set<T>& s) {
    for (const auto& x : s) cout << x << ' ';
    cout << '\n';
}

// print map
template<typename K, typename V>
void printMap(const map<K, V>& m) {
    for (const auto& [k, v] : m) cout << k << ':' << v << ' ';
    cout << '\n';
}

void solve() {
    string scale;
    getline(cin, scale);
    stringstream ss_s(scale);

    int x,y,z,total = 0;
    ss_s >> x >> y >> z;

    string cost;
    getline(cin, cost);
    stringstream ss_c(cost);

    int costs;
    ss_c >> costs;

    total += (2*(x+y))*z;
    cout << total << "\n";

    cout << total * costs;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}