#include <iostream>
int main() {
    int n;
    std::cin >> n;
    std::cout <<  n / 100 + (n % 100) / 20 + ((n % 100) % 20) / 10 + (((n % 100) % 20) % 10) / 5 + ((((n % 100) % 20) % 10) % 5) / 1;

}