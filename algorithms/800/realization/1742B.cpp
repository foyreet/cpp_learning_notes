#include <iostream>
#include <vector>
int solve() {
    int n;
    std::cin >> n;
    std::vector<int> a;
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        a.push_back(element);
    }

    bool flag = true;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (a[i] != a[j]) {
                flag;
            } else if (a[i] == a[j]) {
                flag = false;
            }
        }
    }
    if (flag) {
        std::cout << "YES" << '\n';
    } else {
        std::cout << "NO" << '\n';
    }
    // 8 7 1 3 4
    // 0 1 2 3 4
}
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}