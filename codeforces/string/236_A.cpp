#include <iostream>
#include <string>
#include <set>

int main() {
    std::string s;
    std::cin >> s;

    // "abcba"
    std::set<char> symbols;
    for (char c : s) {
        symbols.insert(c);
        c - 'a';
    }

    if (symbols.size() % 2 != 0) {
        std::cout << "IGNORE HIM!";
    } else {
        std::cout << "CHAT WITH HER!";
    }
}