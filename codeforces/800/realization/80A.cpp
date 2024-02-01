#include <iostream>
#include <vector>
bool prime_check(int x) {
    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}
int solve() {
    std::vector<int> a;
    for (int i = 2; i <= 50; i++) {
        if (prime_check(i)) {
            a.push_back(i);
        }
    }
    int index_n;
    int index_m;
    bool flag;
    int n, m;
    std::cin >> n >> m;
    for (int i = 0; i < a.size(); i++) {
        if (n == a[i]) {
            index_n = i;
        }
        if (m == a[i]) {
            index_m = i;
        }
    }
    for (int i = 0; i < a.size(); i++) {
        if (index_m - index_n == 1) {
            flag = true;
        } else {
            flag = false;
        }
    }
    if (flag) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}
int main() {
    solve();
}
