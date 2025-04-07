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
    string ramen,topping;
    char ramenSize,ramenType,toppingType;
    int numTopping = 0;
    getline(cin,ramen);
    getline(cin,topping);

    istringstream(ramen) >> ramenSize >> ramenType;
    istringstream(topping) >> toppingType >> numTopping;

    // cout << ramenSize << ramenType << toppingType << numTopping;

    map<char,map<char,int>> noodle = {
        {
            'S',{{'R',60},{'T',80}}
        },
        {
            'M',{{'R',80},{'T',100}}
        },
        {
            'L',{{'R',100},{'T',120}}
        },
    };

    int total = noodle[ramenSize][ramenType];
    if (toppingType != 'N') { (toppingType == 'E') ? total += 10*numTopping : total += 15*numTopping ; }
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