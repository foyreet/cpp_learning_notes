#include <iostream>
#include <vector>
int solve() {
    int n;
    std::cin >> n;
    std::vector<int> candies;
    for (int i = 0; i < n; i++) {
        int candy;
        std::cin >> candy;
        candies.push_back(candy);
    }

    int count_1 = 0;
    int count_2 = 0;
    for (int candy : candies) {
        if (candy == 1) {
            count_1++;
        } else {
            count_2++;
        }
    }
    if (count_1 % 2 == 0 && count_2 % 2 == 0 || ) {
        std::cout << "YES" << '\n';
    } else {
        std::cout << "NO" << '\n';
    }
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
