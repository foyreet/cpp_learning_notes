#include <iostream>

using namespace std;

int solve() {
    int n;
    cin >> n;
    int cnt2 = 0;
    int cnt3 = 0;
    while (n % 2 == 0) {
        n = n/2;
        cnt2++;
    }
    while (n % 3 == 0) {
        n = n/3;
        cnt3++;
    }
    // 24 3 2^3
    if (n == 1 && cnt2 <= cnt3) {
        cout << 2 * cnt3 - cnt2;
    } else {
        cout << -1 << '\n';
    }
}
