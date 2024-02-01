#include <iostream>

using namespace std;

void my_solve() {
    // 3 4
    int a, b;
    cin >> a >> b;
    if (a < b) {
        if (a % 2 == 0 && b % 2 != 0) {
            std::cout << 1 << '\n';
        } else if (a % 2 == 0 && b % 2 == 0) {
            std::cout << 2 << '\n';
        }
    } else {
        if (a % 2 != 0 && b % 2 == 0) {
            std::cout << 1 << '\n';
        } else if (a % 2 == 0 && b % 2 == 0) {
            std::cout << 2 << '\n';
        }
    }
}
