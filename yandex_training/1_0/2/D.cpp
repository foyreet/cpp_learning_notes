#include <iostream>
#include <vector>
int main() {
    std::vector<int> a;
    int counter = 0;
    for (int i = 0; i < 5; i++) {
        int element;
        std::cin >> element;
        a.push_back(element);
    }

    for (int i = 1; i < 4; i++) {
        if (a[i] > a[i-1] && a[i] > a[i+1]) {
            counter++;
        }
    }
    std::cout << counter;
}