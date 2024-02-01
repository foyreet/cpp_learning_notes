#include <iostream>
#include <cmath>
int solve() {
    int n;
    std::cin >> n;
    int c1 = n / 3;
    int c2 = n / 3;
    if (n % 3 == 0) {
        std::cout << c1 << " " << c2 << '\n';
    }
    if (n % 3 == 1) {
        std::cout << c1 + 1 << " " << c2 << '\n';
    }
    if (n % 3 == 2) {
        std::cout << c1 << " " << c2 + 1 << '\n';
    }
}
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}