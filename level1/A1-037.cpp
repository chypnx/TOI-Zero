#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;

    string romanNum;
    vector<map<int, string>> romanSet = {
        {
            {1, "I"}, {2, "II"}, {3, "III"}, {4, "IV"}, {5, "V"},
            {6, "VI"}, {7, "VII"}, {8, "VIII"}, {9, "IX"}
        },
        {
            {1, "X"}, {2, "XX"}, {3, "XXX"}, {4, "XL"}, {5, "L"},
            {6, "LX"}, {7, "LXX"}, {8, "LXXX"}, {9, "XC"}
        },
        {
            {1, "C"}, {2, "CC"}, {3, "CCC"}, {4, "CD"}, {5, "D"},
            {6, "DC"}, {7, "DCC"}, {8, "DCCC"}, {9, "CM"}
        },
        {
            {1, "M"}, {2, "MM"}, {3, "MMM"}
        }
    };

    for (int i = 0; num > 0; i++) {
        int digit = num % 10;
        if (digit != 0) {
            romanNum = romanSet[i][digit] + romanNum;
        }
        num /= 10;
    }

    cout << romanNum << "\n";
    return 0;
}
