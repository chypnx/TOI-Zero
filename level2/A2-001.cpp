#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

void solve() {
    // รับค่าจำนวนครั้งที่สะท้อน
    string fline;
    getline(cin,fline);
    stringstream f_ss(fline);

    int ref_red, ref_blue;
    f_ss >> ref_red >> ref_blue;

    // รับค่าจุดที่สะท้อน แดง, ฟ้า    
    string sline;
    getline(cin,sline);
    stringstream s_ss(sline);

    vector<int> dis_red;
    int tempx;
    while (s_ss >> tempx) dis_red.push_back(tempx);

    string tline;
    getline(cin,tline);
    stringstream t_ss(tline);

    vector<int> dis_blue;
    int tempy;
    while(t_ss >> tempy) dis_blue.push_back(tempy);

    // หาความชันแต่ละอันของ แดง
    vector<double> m_r; // เก็บความชัน
    vector<double> c_r; // เก็บ c
    vector<double> x_r; // เก็บ x แรก

    for (int i = 0; i < ref_red; i++)
    {   
        double y2, y1; if (i == 0 || i % 2 == 0){ y2 = -1; y1 = 0;} else { y2 = 0; y1 = -1;}
        double x1 = (i == 0) ? 0 : dis_red[i-1];
        double x2 = dis_red[i];
        double m = (y2 - y1) / (x2 - x1);

        m_r.push_back(m);

        c_r.push_back(y1 - (m * x1));
        x_r.push_back(x1);        
    }

    // หาความชันแต่ละอันของ ฟ้า
    vector<double> m_b; // เก็บความชัน
    vector<double> c_b; // เก็บ c
    vector<double> x_b; // เก็บ x แรก

    for (int i = 0; i < ref_blue; i++)
    {   
        double y2, y1; if (i == 0 || i % 2 == 0){ y2 = -1; y1 = 0;} else { y2 = 0; y1 = -1;}
        double x1 = (i == 0) ? 0 : dis_blue[i-1];
        double x2 = dis_blue[i];

        double m = (y2 - y1) / (x2 - x1);
        m_b.push_back(m);

        c_b.push_back(y1 - (m * x1));
        x_b.push_back(x1);
    }
    
    // เทียบหาจุดตัด+++
    map<int,int> pos;
    for (int i = 0; i < m_r.size(); i++){
        for (int j = 0; j < m_b.size(); j++){
            double x,y;
            double delta_c = c_b[j] - c_r[i];
            double delta_m = m_r[i] - m_b[j];

            x = (delta_c / delta_m); // หาจุดตัดแกน x
            y = (m_r[i] * x) + c_r[i]; // หาจุดตัดแกน y
            if (y >= -1 && y <= 0){
                pos[(int)(x + 1e-6)] = (int)(x + 1e-6);
            }
        }
    }
    
    cout << pos.size();
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}