#include <iostream>
#include <string>
int main() {
    std::string s;
    std::cin >> s;
        if (s[0] >= 65 && s[0] <= 90) {
            std::cout << s;
        } else if (s[0] >= 97 && s[0] <= 122) {
            s[0] -= 32;
            std::cout << s;
        }
}
