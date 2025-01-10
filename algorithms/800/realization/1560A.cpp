#include <iostream>
#include <vector>

int main() {
    std::vector<int> a;
    a.push_back(0);
    for (int i = 1; i <= 10000; i++) {
        if (i % 3 != 0 && i % 10 != 3) {
            a.push_back(i);
        }
    }

    int t;
    std::cin >> t;
    while (t--) {
        int k;
        std::cin >> k;
        std::cout << a[k] << '\n';
    }
}
