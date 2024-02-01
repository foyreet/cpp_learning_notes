#include <iostream>
bool prime_check(int x) {
    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}