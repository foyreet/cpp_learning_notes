#include <iostream>
#include <vector>
int main() {
    int counter = 0;
    int n, h;
    std::cin >> n >> h;
    std::vector<int> a;
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        a.push_back(element);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > h) {
            counter+=2;
        } else {
            counter++;
        }
    }
    std::cout << counter;
}