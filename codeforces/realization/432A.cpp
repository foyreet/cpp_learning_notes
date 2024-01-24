#include <iostream>
#include <vector>
int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> a;
    for (int i = 0;i < n; i++) {
        int element;
        std::cin >> element;
        a.push_back(element);
    }
    std::vector<int> number_of_remaining_attempts;
    for (int i = 0; i < n; i++) {
        number_of_remaining_attempts.push_back(5 - a[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (number_of_remaining_attempts[i] >= k) {
            count++;
        }
    }
    int result = count / 3;
    std::cout << result;
}
