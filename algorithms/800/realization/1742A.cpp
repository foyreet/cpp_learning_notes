#include <iostream>
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int a, b, c;
        std::cin >> a >> b >> c;
        if (a + b == c || a + c == b || b + c == a) {
            std::cout << "YES" << '\n';
        } else {
            std::cout << "NO" << '\n';
        }

    }
}