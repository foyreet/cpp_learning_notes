#include <iostream>

int div_up(int x, int y) {
    return (x + y - 1) / y;
}

int solve() {
    int n, x;
    std::cin >> n >> x;
    int flat = 1;
    if (n >= 3) {
        flat += div_up((n - 2), x);
    }
    std::cout << flat << '\n';
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}