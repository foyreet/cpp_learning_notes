#include <iostream>
int main() {
    int counter_Mishka = 0;
    int counter_Chris = 0;
    int counter_Friendship = 0;
    int n;
    std::cin >> n;
    while (n--) {
        int m, c;
        std::cin >> m >> c;
        if (m > c) {
            counter_Mishka++;
        } else if (c > m) {
            counter_Chris++;
        } else {
            counter_Friendship++;
        }
    }
    if (counter_Mishka > counter_Chris) {
        std::cout << "Mishka";
    } else if (counter_Chris > counter_Mishka) {
        std::cout << "Chris";
    } else {
        std::cout << "Friendship is magic!^^";
    }
}
