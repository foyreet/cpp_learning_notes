#include <iostream>
#include <string>
int solve() {
    bool flag;
    std::string s;
    std::cin >> s;
    int count_number_of_letters = int(s.size());
    int half = count_number_of_letters / 2;
    if (count_number_of_letters % 2 != 0) {
        flag = false;
    } else {
        for (int i = 0; i < half; i++) {
            if (s[i] == s[half + i]) {
                flag = true;
            }
        }
    }
    if (flag) {
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
