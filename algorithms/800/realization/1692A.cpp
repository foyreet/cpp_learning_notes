#include <iostream>
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int counter = 0;
        int a, b, c, d;
        std::cin >> a >> b >> c >> d;
        if (b > a) {
            counter++;
        }
        if (c > a) {
            counter++;
        }
        if (d > a) {
            counter++;
        }
        std::cout << counter << '\n';
    }
}