#include <iostream>
#include <vector>
int main() {
    int n;
    std::cin >> n;
    std::vector<int> a;
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        a.push_back(element);
    }
    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            flag = false;
            break;
        }
    }

    if (flag) {
        std::cout << "EASY";
    } else {
        std::cout << "HARD";
    }
 }