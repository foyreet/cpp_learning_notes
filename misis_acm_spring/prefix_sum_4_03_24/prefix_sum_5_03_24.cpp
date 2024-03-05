#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using std::cin;
using std::cout;
// Нахождение отрезка суммы равной k
std::ostream& operator << (std::ostream& os, const std::vector<int>& v) {
    for (const auto& x : v) {
        os << x << ' ';
    }
    return os;
}

std::istream& operator >>(std::istream& is, std::vector<int>& v) {
    for (auto& x : v) {
        is >> x;
    }
    return is;
}
int main() {
    std::vector<int> arr(10);
    std::cin >> arr;
    std::vector<int> pref(arr.size());
    std::vector<int> m(arr.size());
    for (size_t i = 1; i < arr.size(); ++i) {
        pref[i] = pref[i-1] + arr[i];
        m[i] = std::min(pref[i-1], m[i-1]);
    }
    std::cout << pref << '\n' << m;
    int k = 5;
    std::unordered_set<int> us;
    us.insert(0);
    for (size_t i = 1; i < arr.size(); ++i) {
        int key = pref[i] - k;
        if (us.count(key) == 1) {
            std::cout << '\n' << i;
            break;
        }
        us.insert(pref[i]);
    }
    return 0;
}
