#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    string name;
    cin >> name;

    string filledName;
    for (char c : name) filledName += toupper(c);

    map<char,string> cardName = {
        {'2',"2"}, {'3',"3"}, {'4',"4"}, {'5',"5"}, {'6',"6"}, {'7',"7"}, {'8',"8"}, {'9',"9"}, {'A',"ace"}, {'J',"jack"}, {'Q',"queen"}, {'K',"king"},
    };

    map<char,string> cardClass = {
        {'D',"diamonds"}, {'H',"hearts"}, {'S',"spades"}, {'C',"clubs"},
    };
    
    if ( filledName == "10D" || filledName == "10H" || filledName == "10S" || filledName == "10C" ){
        cout << "10" << " of " << cardClass[filledName[2]];
    }else{
        cout << cardName[filledName[0]] << " of " << cardClass[filledName[1]];
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