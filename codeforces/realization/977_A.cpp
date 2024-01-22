#include <iostream>
int main() {
    int n, k;
    std::cin >> n >> k;
    while (k--) {
        if (n % 10 != 0) {
            n -= 1;
        } else {
            n /= 10;
        }
    }
    std::cout << n;
}