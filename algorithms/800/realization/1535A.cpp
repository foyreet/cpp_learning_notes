#include <iostream>
#include <algorithm>
#include <vector>
int solve() {
    int s1, s2, s3, s4;
    std::cin >> s1 >> s2 >> s3 >> s4;
    std::vector<int> a;
    a.push_back(s1);
    a.push_back(s2);
    a.push_back(s3);
    a.push_back(s4);
    int max_1 = a[0];
    for (int i = 0; i < a.size(); i++) {
        if (max_1 < a[i]) {
            max_1 = a[i];
        }
    }
    // 4 5 6
    // std::erase(a, max_1); // c c++20 удаление элемента из массива
    int max_2 = a[0];
    for (int i = 0; i < a.size(); i++) {
        if (max_2 < a[i]) {
            max_2 = a[i];
        }
    }
    if ((std::max(s1, s2) == max_2 || std::max(s1, s2) == max_1) && (std::max(s3, s4) == max_2 || std::max(s3, s4) == max_1)) {
        std::cout << "YES" << '\n';
    } else {
        std::cout << "NO" << '\n';
    }
}
// 4 5 6 9  9 6
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}