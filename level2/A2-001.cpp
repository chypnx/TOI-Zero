#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string fline, sline, tline;
    getline(cin,fline);
    stringstream f_ss(fline);

    int ref_red, ref_blue;
    f_ss >> ref_red >> ref_blue;

    getline(cin,sline);
    stringstream s_ss(sline);

    vector<int> dis_red;
    int tempx;
    while (s_ss >> tempx) dis_red.push_back(tempx);

    getline(cin,tline);
    stringstream t_ss(tline);

    vector<int> dis_blue;
    int tempy;
    while(t_ss >> tempy) dis_blue.push_back(tempy);

    vector<double> m_r,c_r; // เก็บความชัน
    for (int i = 0; i < ref_red; i++){   
        double y2, y1; if (i == 0 || i % 2 == 0){ y2 = -1; y1 = 0;} else { y2 = 0; y1 = -1;}
        double x1 = (i == 0) ? 0 : dis_red[i-1];
        double x2 = dis_red[i];
        double m = (y2 - y1) / (x2 - x1);

        m_r.push_back(m);
        c_r.push_back(y1 - (m * x1)); 
    }

    vector<double> m_b,c_b; // เก็บความชัน
    for (int i = 0; i < ref_blue; i++){   
        double y2, y1; if (i == 0 || i % 2 == 0){ y2 = -1; y1 = 0;} else { y2 = 0; y1 = -1;}
        double x1 = (i == 0) ? 0 : dis_blue[i-1];
        double x2 = dis_blue[i];
        double m = (y2 - y1) / (x2 - x1);
        
        m_b.push_back(m);
        c_b.push_back(y1 - (m * x1));
    }
    
    map<int,int> pos;
    for (int i = 0; i < m_r.size(); i++){
        for (int j = 0; j < m_b.size(); j++){
            double x = ((c_b[j] - c_r[i]) / (m_r[i] - m_b[j])),y = (m_r[i] * x) + c_r[i];
            if (y >= -1 && y <= 0) pos[(int)(x + 1e-6)] = (int)(x + 1e-6);
        }
    }
    
    cout << pos.size();
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}