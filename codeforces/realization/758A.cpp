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
    int sum = 0;
    int ras;
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        ras = max - a[i];
        sum += ras;
    }
    std::cout << sum;
}