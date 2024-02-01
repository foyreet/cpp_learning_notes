#include <iostream>
#include <vector>

using namespace std;

// time complexity - O(n)
// space complexity - O(n)
void my_solve() {
    int n;
    cin >> n;
    // O(1)
    // 10   -> 1'000
    // 1000 -> 1'000
    // O(n)
    // 10   -> 1'000
    // 100  -> 10'000
    // O(n^2)
    // 10   -> 1'000
    // 100  -> 1'000'000
    vector<int> a;
    for (int i = 0; i < 2 * n; i++) {
        int number;
        cin >> number;
        a.push_back(number);
    }

    int count_even = 0;
    int count_odd = 0;
    for (int number: a) {
        if (number % 2 == 0) {
            count_even++;
        } else {
            count_odd++;
        }
    }

    if (count_even == count_odd) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

// time complexity - O(n)
// space complexity - O(1)
void refactored_solve() {
    // 10         -> 3
    // 1'000'000  -> 3
    int n;
    cin >> n;
    int count_even = 0;
    int count_odd = 0;
    for (int i = 0, number; i < 2 * n; i++) {
        cin >> number;
        if (number % 2 == 0) {
            count_even++;
        } else {
            count_odd++;
        }
    }

    if (count_even == count_odd) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        my_solve();
    }
}