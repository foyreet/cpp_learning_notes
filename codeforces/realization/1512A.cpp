#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        // 1
        // 1 2 1 1 1 1 1 1
        // 1 1 1
        // 2 1 1
        // 1 2 1
        // 1 1 2
        std::cin >> n;
        std::vector<int> a;
        for (int i = 0; i < n; i++) {
            int number;
            std::cin >> number;
            a.push_back(number);
        }

        int repeatedNumber;
        if (a[0] == a[1] && a[1] == a[2]) {
            repeatedNumber = a[0];
        } else if (a[0] != a[1] && a[1] == a[2]) {
            repeatedNumber = a[1];
        } else if (a[0] != a[1] && a[1] != a[2]) {
            repeatedNumber = a[0];
        } else if (a[0] == a[1] && a[1] != a[2]) {
            repeatedNumber = a[1];
        }

        int uniqueNumber;
        for (int i = 0; i < n; i++) {
            if (a[i] != repeatedNumber) {
                uniqueNumber = i;
            }
        }

        std::cout << uniqueNumber + 1 << '\n';
    }
}