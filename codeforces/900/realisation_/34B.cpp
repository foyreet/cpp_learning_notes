#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a;
    vector<int> negative;
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        a.push_back(element);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] <= 0) {
            negative.push_back(a[i]);
        }
    }
    sort(negative.begin(), negative.end());

    int sum = 0;
    for (int i = 0; i < negative.size() && m > 0; i++, m--) {
        sum += negative[i];
    }
    cout << abs(sum);
}

int main() {
    solve();
}