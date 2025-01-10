#include <iostream>
#include <string>
#include <queue>

using namespace std;

void solve() {
    // helloooasd
    string find_word = "... h ... e ... l ... l ... o ... ";
    string s;
    cin >> s;

    vector<char> symbols;
    for (char c : find_word) {
        symbols.push_back(c);
    }

    for (char c : s) {
        if (c == symbols[0]) {
            symbols.erase(symbols.begin());
        }

        if (symbols.empty()) {
            break;
        }
    }

    if (symbols.empty()) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

int main() {
    solve();
}
