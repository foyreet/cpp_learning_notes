#include <iostream>
#include <string>
int main() {
    int troom;
    int tcond;
    std::cin >> troom >> tcond;
    std::string mode;
    std::cin >> mode;
    if (mode == "freeze") {
        if (troom <= tcond) {
            std::cout << troom << std::endl;
        }
        else if (troom > tcond) {
            std::cout << tcond << std::endl;
        }
    }
    else if (mode == "heat") {
        if (troom >= tcond) {
            std::cout << troom << std::endl;
        }
        else if (troom < tcond) {
            std::cout << tcond << std::endl;
        }
    }
    else if (mode == "auto") {
        std::cout << tcond << std::endl;
    }
    else if (mode == "fan") {
        std::cout << troom << std::endl;
    }
}

