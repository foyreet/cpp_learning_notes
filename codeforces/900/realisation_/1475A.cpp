#include <iostream>

using namespace std;

int solve() {
    long long n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        n = n / 2;
    }
    if (n == 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}