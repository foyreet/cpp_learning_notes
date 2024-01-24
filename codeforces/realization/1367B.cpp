#include <iostream>
#include <vector>
int main() {
    int counter_mismatches = 0;
    int counter_1_element = 0;
    int counter_1_i= 0;
    int counter_0_element = 0;
    int counter_0_i= 0;
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> a;
        for (int i = 0; i < n; i++) {
            int element;
            std::cin >> element;
            a.push_back(element);
        }
        std::vector<int> remainder_of_division_by_2_element;
        std::vector<int> remainder_of_division_by_2_i;
        for (int i = 0; i < n; i++) {
            remainder_of_division_by_2_element.push_back(a[i] % 2);
        }
        for (int i = 0; i < n; i++) {
            remainder_of_division_by_2_i.push_back(i % 2);
        }
        for (int i = 0; i < n; i++) {
            if (remainder_of_division_by_2_element[i] != remainder_of_division_by_2_i[i]) {
                counter_mismatches++;
            }
        }
        for (int i = 0; i < n; i++) {
            if (remainder_of_division_by_2_element[i] == 1) {
                counter_1_element++;
            }
            if (remainder_of_division_by_2_element[i] == 0) {
                counter_0_element++;
            }
            if (remainder_of_division_by_2_i[i] == 1) {
                counter_1_i++;
            }
            if (remainder_of_division_by_2_i[i] == 0) {
                counter_0_i++;
            }
        }
        if (counter_1_element == counter_1_i && counter_0_element == counter_0_i) {
            if (counter_mismatches > 1 || counter_mismatches == 0) {
                std::cout << counter_mismatches / 2 << '\n';
            }
        } else if (counter_1_element != counter_1_i && counter_0_element != counter_0_i){
            std::cout << -1 << '\n';
        }
        counter_1_element = 0;
        counter_1_i = 0;
        counter_0_element = 0;
        counter_0_i = 0;
        counter_mismatches = 0;
    }
}
/* Решение с codeforces
#include <bits/stdc++.h>

using namespace std;
using ld = long double;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 != i % 2) {
            if (i % 2 == 0) {
                a++;
            } else {
                b++;
            }
        }
    }
    if (a != b) {
        cout << -1 << endl;
    } else {
        cout << a << endl;
    }
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
}
 */