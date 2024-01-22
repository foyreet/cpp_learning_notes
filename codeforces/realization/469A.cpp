#include <iostream>
#include <vector>
#include <set>
int main() {
    int n;
    std::cin >> n;
    int p;
    std::cin >> p;
    std::vector<int> a_1;
    for (int i = 0; i < p; i++) {
        int element;
        std::cin >> element;
        a_1.push_back(element);
    }
    int k;
    std::cin >> k;
    std::vector<int> a_2;
    for (int i = 0; i < k; i++) {
        int element;
        std::cin >> element;
        a_2.push_back(element);
    }
    a_1.insert(a_1.end(), a_2.begin(), a_2.end());
    std::set<int> a;
    for (int i = 0; i < k + p; i++) {
        a.insert(a_1[i]);
    }
    if (n - a.size() == 0) {
        std::cout << "I become the guy.";
    } else {
        std::cout << "Oh, my keyboard!";
    }
}
