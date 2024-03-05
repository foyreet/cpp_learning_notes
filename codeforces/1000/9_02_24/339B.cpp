#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a;
    for (int i = 0; i < m; i++) {
        int el;
        cin >> el;
        a.push_back(el);
    }
    long long units_of_time = 0;

    if (m == 1) {
        cout << a[0] - 1;
    } else if (m >= 2) {
        for (int i = 1; i < m - 1; i++) {
            if (a[i] > a[i + 1]) {
                units_of_time += n - a[i] + a[i + 1];
            } else if (a[i] < a[i + 1]) {
                units_of_time += a[i + 1] - a[i];
            } else if (a[i] == a[i + 1]) {
                units_of_time += 0;
            }
        }
        if (a[0] > a[1]) {
            units_of_time += n + a[1] - 1;
        } else if (a[0] < a[1]) {
            units_of_time += a[0] - 1 + a[1] - a[0];
        }
        cout << units_of_time;
    }
}

int main() {
    solve();
}