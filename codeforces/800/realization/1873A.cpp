#include <iostream>
#include <string>

int solve() {
    const std::string destination = "abc";
    std::string s;
    // bac
    std::cin >> s;

    int diff = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != destination[i]) {
            diff++;
        }
    }

    if (diff <= 2) {
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
