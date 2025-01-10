#include <iostream>
#include <string>
int main() {
    int counter_A = 0;
    int counter_D = 0;
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            counter_A++;
        } else if (s[i] == 'D') {
            counter_D++;
        }
    }
    if (counter_A > counter_D) {
        std::cout << "Anton";
    } else if (counter_D > counter_A) {
        std::cout << "Danik";
    } else {
        std::cout << "Friendship";
    }

}
