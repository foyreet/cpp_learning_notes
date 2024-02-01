#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void solve() {
    long long a, b, r;
    cin >> a >> b >> r;
    long long min = LONG_LONG_MAX;
    long long result;
    for (long long x = 0; x <= r; x++) {
        result = abs((a ^ x) - (b ^ x));
        if (min < result) {
            min = result;
        }
    }
    cout << min << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}