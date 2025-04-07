#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve() {
    string text;
    cin >> text;

    string newText;
    for (char c : text) newText += tolower(c);

    size_t found = newText.find("buu");
    size_t foundB = newText.find("b");

    if (found != string::npos) {
        int maxCombo = 2, tempCombo = 0;
        for (size_t i = found; i < text.size(); i++) {
            (newText[i] == 'u') ? tempCombo++ : tempCombo = 0;
            if (tempCombo > maxCombo) maxCombo = tempCombo;
        }
        cout << "Yes " << maxCombo;
    } else if (foundB != string::npos) {
        for (size_t i = foundB + 1; i < text.size(); i++) text[i] = 'U';
        cout << text;
    } else {
        int temp = 0;
        vector<char> t = { 'B', 'U', 'U' };
        for (size_t i = 0; i < text.size(); i++) {
            text[i] = t[temp];
            temp = (temp + 1) % 3;
        }
        cout << text;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}