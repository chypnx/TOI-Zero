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
    string a,b;
    cin >> a >> b;

    string sName = (a.size() < b.size()) ? a : b;
    string LName = (a.size() < b.size()) ? b : a;
    int dif = a.size() - b.size();

    // ทำให้ชื่อยาวเท่ากัน
    for (int i = 0; i < abs(dif); i++) sName += sName[i];

    string sname, lname;
    // ทำให้ชื่อเป็นพิมพ์เล็กทั้งหมด
    for (int i : sName) sname += tolower(i);
    for (int i : LName) lname += tolower(i);
    
    unordered_set<char> love = {'l', 'o', 'v', 'e'};

    // first try w or $
    int wCombo = 1, wComboTemp = 1, wTotal = 0;
    for (int i = 0; i < lname.length(); i++){
        if (love.count(sname[i]) || love.count(lname[i])){
            lname[i] = 'w';
            if (lname[i-1] == 'w' && i>0) wComboTemp++; 
            if (wComboTemp > wCombo) wCombo = wComboTemp;
            wTotal++;           
        }
        else{
            lname[i] = '$';
            wComboTemp = 1;
        } 
    }

    // secound try even, odd check
    // cout << "wTotal" << wTotal << "\n";
    if(wTotal % 2 == 0){
        if(wCombo < 2) lname += '#';
    }else{
        lname += to_string(wCombo);
    }
    cout << lname;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}