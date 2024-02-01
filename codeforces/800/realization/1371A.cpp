#include <iostream>
int solve() {
    /*

     1 2 3 4
     4 4 2

     1 2 3 4 5
     5 5 5

     1 2 3 4 5 6
     5 5 6

     */
    int n;
    std::cin >> n;
    if (n % 2 != 0) {
        std::cout << n / 2 + 1 << '\n';
    } else {
        std::cout << n / 2  << '\n';
    }
}
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
