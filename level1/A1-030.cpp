#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;

    string line;
    cin.ignore();
    getline(cin, line);
    stringstream ss(line);

    vector<pair<int,int>> data_pair;

    int x,y;
    while (ss >> x >> y) data_pair.push_back({x,y});
    
    if (data_pair.size() == 1){
        cout << max(data_pair[0].first, data_pair[0].second);
    }else{
        int total = 0;
        for (size_t i = 0; i < data_pair.size(); i++){
            int bigger = max(data_pair[i].first, data_pair[i].second);
            total += bigger;
            cout << bigger;
            if (i != data_pair.size() - 1) cout << " + ";
        }
        cout << " = " << total;
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