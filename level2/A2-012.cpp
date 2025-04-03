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
    string line;
    getline(cin,line);
    stringstream ss(line);

    int carrot, kalum, tomato;
    ss >> carrot >> kalum >> tomato;

    int total = 0;
    total += (carrot*10) + (kalum*25) + (tomato*3);

    cout << total;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}