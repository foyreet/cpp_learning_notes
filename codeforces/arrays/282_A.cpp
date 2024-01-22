#include <iostream>
#include <string>

int main() {
    int x = 0;
    int n;
    std::cin >> n;
    while (n--) {
        std::string str;
        std::string substr1 = "++";
        std::string substr2 = "--";
        std::cin >> str;
        if (str.find(substr1) != std::string::npos) {
            x++;
        } else if (str.find(substr2) != std::string::npos) {
            x--;
        }
    }
    std::cout << x;

}
