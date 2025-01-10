#include <iostream>
#include <vector>
#include <limits>
int solve() {
    int n;
    std::cin >> n;
    std::vector<int> a;
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        a.push_back(element);
    }
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    std::vector<int> a_new;
    for (int i = 0; i < n; i++) {
        a_new.push_back(max - a[i]);
    }
    int max_new = a_new[0];
    for (int i = 0; i < n; i++) {
        if (a_new[i] > max_new) {
            max_new = a_new[i];
        }
    }
    std::cout << max_new << "\n";
}
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
