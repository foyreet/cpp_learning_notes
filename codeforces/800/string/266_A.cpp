#include <iostream>
#include <string>
int main() {
    int count = 0;
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == s[i+1]) {
            count++;
        }
    }
    std::cout << count;
}
