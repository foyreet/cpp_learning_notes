#include <iostream>
int main() {
    int counter = 0;
    int s1, s2, s3, s4;
    std::cin >> s1 >> s2 >> s3 >> s4;
    if (s1 == s2 || s1 == s3 || s1 == s4) {
        counter++;
    }
    if (s2 == s3 || s2 == s4) {
        counter++;
    }
    if (s3 == s4) {
        counter++;
    }
    std::cout << counter;
}
