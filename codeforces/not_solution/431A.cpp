#include <iostream>
#include <vector>
#include <string>
int main() {
    int a1, a2, a3, a4;
    std::cin >> a1 >> a2 >> a3 >> a4;
    std::string s;
    std::cin >> s;
    int sum = 0;
    int counter_1 = 0;
        if (s.find('1') != std::string::npos) {
            counter_1++;
        }
    std::cout << counter_1;
}
