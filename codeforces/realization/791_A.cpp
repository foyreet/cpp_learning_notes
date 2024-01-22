#include <iostream>
int main() {
    int a, b;
    std::cin >> a >> b;
    int counter = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        counter++;
    }
    std::cout << counter;
}