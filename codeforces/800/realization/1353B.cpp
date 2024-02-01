#include <iostream>
#include <vector>
#include <algorithm>
int solve() {
    int counter = 0;
    int n, k;
    std::cin >> n >> k;
        std::vector<int> a;
        for (int i = 0; i < n; i++) {
            int element;
            std::cin >> element;
            a.push_back(element);
        }
        std::vector<int> b;
        for (int i = 0; i < n; i++) {
            int element;
            std::cin >> element;
            b.push_back(element);
        }
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    // 2 3 8 5
    // 2 6 7 8

    // 2 3 5 8
    // 8 7 6 2
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (i < k)
        {
            sum += std::max(a[i], b[i]);
        }
        else {
            sum += a[i];
        }
    }
    std::cout << sum << '\n';
}
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
