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

    // 1 2 3 4 5 10 2
    int min = INT_MAX;
    for (int num : a) {
        if (num < min) {
            min = num;
        }
    }

    int sum = 0;
    for (int num : a) {
        sum += num - min;
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
