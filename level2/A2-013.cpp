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
    string bubble;
    getline(cin, bubble);
    stringstream ss_b(bubble);

    char bType;
    int bVolume;
    ss_b >> bType >> bVolume;

    map<char,int> bTshop = {
        {'H' , 5},
        {'O' , 3},
        {'J' , 2},
    };

    string tea;
    getline(cin, tea);
    stringstream ss_t(tea);

    char tType;
    int tStweet, tVolume;
    ss_t >> tType >> tStweet >> tVolume;

    map<char,map<int,int>> tTshop = {
        {
            'R' , {{1 , 12},{2 , 18},{3 , 25}},
        },
        {
            'T' , {{1 , 15},{2 , 20},{3 , 30}},
        },
        {
            'M' , {{1 , 10},{2 , 15},{3 , 20}},
        },
    };

    int totalCal = 0;
    totalCal += (bTshop[bType] * bVolume) + (tTshop[tType][tStweet] * tVolume);

    cout << totalCal;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}