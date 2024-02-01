#include <iostream>
#include <vector>
int solve() {
    int n;
    std::cin >> n;
    int k = n / 2;
    std::cout << k << '\n';
    std::vector<int> a;
    if (n % 2 != 0) {
        for (int i = 0; i < k - 1; i++) {
            a.push_back(2);
        }
        a.push_back(3);
    } else {
        for (int i = 0; i < k; i++) {
            a.push_back(2);
        }
    }
    for (int i = 0; i < k; i++) {
        std::cout << a[i] << " ";
    }
}
int main() {
    solve();
}
