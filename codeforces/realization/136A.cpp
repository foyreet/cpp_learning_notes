#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    // кому подарил подарок
    std::vector<int> a;
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        a.push_back(element - 1);
    }

    // кто подарил подарок
    std::vector<int> r(n);

    for (int i = 0; i < n; i++) {
        r[a[i]] = i;
    }

    for (int i = 0; i < n; i++) {
        std::cout << r[i] + 1 << ' ';
    }
}
