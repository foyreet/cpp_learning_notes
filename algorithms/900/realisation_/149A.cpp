#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int k;
    cin >> k;
    vector<int> a;
    for (int i = 0; i < 12; i++) {
        int element;
        cin >> element;
        a.push_back(element);
    }
    if (k == 0) {
        cout << 0;
        return;
    }
    int count = 0;
    int sum = 0;
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < 12; i++) {
        sum += a[i];
        count++;
        if (sum >= k) {
            cout << count;
            return;
        }
    }
    if (sum < k) {
        cout << -1;
    }
}

int main() {
    solve();
}