#include <iostream>
int main() {
    int n;
    std::cin >> n;
    std::cout << "I hate";
    for (int i = 2; i <= n; i++) {
        std::cout << " that ";
        if (i % 2 == 0) {
            std::cout << "I love";
        } else {
            std::cout << "I hate";
        }
    }
    std::cout << " it";
}
