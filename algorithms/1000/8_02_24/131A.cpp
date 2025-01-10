#include <iostream>
#include <string>

using namespace std;

void symbol_invert(string& s, int i) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
        s[i] += 32;
    } else if (s[i] >= 'a' && s[i] <= 'z') {
        s[i] -= 32;
    }
}

void solve() {
    string s;
    cin >> s;
    // aBA
    // ABA
    bool flag = true;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            flag = false;
            break;
        }
    }

    if (flag) {
        for (int i = 0; i < s.length(); i++) {
            symbol_invert(s, i);
        }
    }

    cout << s;
}

int main() {
    solve();
}