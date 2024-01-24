#include <iostream>
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int x, y, n;
        std::cin >> x >> y >> n;
        if (n - (n % x) + y <= n) {
            std::cout << n - (n % x) + y << '\n';
        } else {
            std::cout << n - (n % x) - (x - y) << '\n';
        }
    }
// 7 5 12345
// 12341 - (7 - 5)
// 10 5 15
// 15 - 5 + 5
}
