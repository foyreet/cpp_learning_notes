#include <iostream>
#include <string>
int main() {
    std::string s;
    std::cin >> s;
    int counter_m = 0;
    int counter_b = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 65 && s[i] <= 90) {
            counter_b++;
        } else if (s[i] >= 97 && s[i] <= 122) {
            counter_m++;
        }
    }
    for (int i = 0; i < s.size(); i++) {
        if (counter_b <= counter_m) {
            if (s[i] >= 65 && s[i] <= 90) {
                s[i] += 32;
            }
        } else {
            if (s[i] >= 97 && s[i] <= 122) {
                s[i] -= 32;
            }
        }
    }
    std::cout << s;
}

