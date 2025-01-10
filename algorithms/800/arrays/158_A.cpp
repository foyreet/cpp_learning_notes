#include <iostream>
#include <vector>
int main() {
    int count = 0;
    int n, k;
    std::cin >> n >> k;
    std::vector <int> a;
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        a.push_back(element);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] >= a[k - 1] && a[i] > 0) {
            count++;
        }
    }
    std::cout << count << '\n';
}
