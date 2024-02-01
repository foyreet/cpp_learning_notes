#include <iostream>
#include <string>

using namespace std;

int solve() {
    int n,k;
    cin >> n >> k;
    string str;
    string s = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            str.push_back(s[j]);
        }
    }
    cout << str << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}