#include <iostream>
int solve() {
    int n;
    std::cin >> n;
// неч = чёт + неч
// чёт
    if (n % 2 == 0) {
        std::cout << "Mahmoud" << '\n';
    }
    else {
        std::cout << "Ehab" << '\n';
    }
}
int main() {
    solve();
}