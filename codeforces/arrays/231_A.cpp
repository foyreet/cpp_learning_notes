#include <iostream>
#include <vector>
int main() {
    int n;
    int count = 0;
    std::cin >> n;
    while (n--) {
        int sum = 0;
        std::vector <int> a;
        for (int i = 0; i < 3; i++) {
            int element;
            std::cin >> element;
            a.push_back(element);
        }
        for (int i = 0; i < 3; i++) {
            sum += a[i];
        }
        if (sum >= 2) {
            count++;
        }
    }
    std::cout << count;
}
