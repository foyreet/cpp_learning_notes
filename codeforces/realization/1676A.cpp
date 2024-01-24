#include <iostream>
#include <string>
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;
        if (int(s[0]) + int(s[1]) + int(s[2]) == int(s[3]) + int(s[4]) + int(s[5])) {
            std::cout << "YES" << '\n';
        } else {
            std::cout << "NO" << '\n';
        }
    }
}
