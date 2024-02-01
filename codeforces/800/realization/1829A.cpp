#include <iostream>
#include <string>
using namespace std;
int solve() {
    string str = "codeforces";
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (str[i] != s[i]) {
            count++;
        }
    }
    cout << count << '\n';
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}