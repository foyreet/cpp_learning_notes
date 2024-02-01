#include <iostream>

using namespace std;

int solve() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i <= m; i++) {
        if (i*m == n) {
            cout << n + (n + m) / i;
        }
    }
    cout << (n + m) / m + n;
}

int main() {
    solve();
}