#include <iostream>
#include <string>
#include <vector>
int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> a;
    for (int i = 0; i < n; i++) {
        std::string element;
        std::cin >> element;
        a.push_back(element);
    }

    // Количество островков
    int counter = 1;

    for (int i = 0; i < n - 1; i++) {
        if (a[i][1] == a[i+1][0]) {
            counter++;
        }
    }

    std::cout << counter;
}
