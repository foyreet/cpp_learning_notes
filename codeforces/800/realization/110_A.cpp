#include <iostream>
#include <string>
int main() {
    long long counter = 0;
    long long n;
    std::cin >> n;
    std::string str_1;
    std::string str_2;
    str_1 = std::to_string(n);
    for (char c : str_1) {
        if (c == '4' || c == '7') {
            counter++;
        }
    }

    str_2 = std::to_string(counter);
    bool flag = true;
    for (char c : str_2) {
        if (c != '4' && c != '7') {
            flag = false;
            break;
        }
    }

    if (flag) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}