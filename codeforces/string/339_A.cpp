#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> a;
    std::string s;
    std::cin >> s;
    a.push_back(s[0]);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '+') {
            a.push_back(s[i+1]);
        }
    }
    std::sort(a.begin(), a.end());

    for (int i = 0; i < a.size(); ++i) {
        std::cout << a[i] - 48;
        if (i < a.size() - 1) {
            std::cout << "+";
        }
    }
}