#include <iostream>
int main() {
    int counter = 0;
    int n;
    std::cin >> n;
    while (n--) {
        int p, q;
        std::cin >> p >> q;
        if (q - p >= 2) {
            counter++;
        }
    }
    std::cout << counter;
}