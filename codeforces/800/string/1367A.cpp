#include <iostream>
#include <string>
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string s;
        std::cin >> s;
        for (int i = 0; i < s.size() - 1; i+=2) {
            std::cout << s[i];
        }
        std::cout << s[s.size()-1] << '\n';
    }
}
