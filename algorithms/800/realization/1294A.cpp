#include <iostream>

int max_from_3_numbers(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (b > a && b > c) {
        return b;
    } else {
        return c;
    }
}

int solve() {
    int a, b, c, n;
    std::cin >> a >> b >> c >> n;
    int max = max_from_3_numbers(a, b, c);
    int diff = abs(max - a) + abs(max - b) + abs(max - c);
    // 8
    // 5 3 2 -> diff = 5
    n -= diff;
    if (n >= 0 && n % 3 == 0) {
        std::cout << "YES" << '\n';
    } else {
        std::cout << "NO" << '\n';
    }
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}