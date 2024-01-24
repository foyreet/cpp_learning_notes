#include <iostream>
#include <string>
int main() {
    std::string s = "codeforces";
    int t;
    std::cin >> t;
    while (t--) {
        char c;
        std::cin >> c;
        if (s.find(c) == std::string::npos) {
            // не встретилось
            std::cout << "NO" << '\n';
        } else {
            std::cout << "YES" << '\n';
        }
    }
}
