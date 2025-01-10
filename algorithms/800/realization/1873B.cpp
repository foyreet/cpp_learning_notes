#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void my_solve() {
    int n;
    cin >> n;
    vector<int> a;
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        a.push_back(element);
        if (a[i] < min) {
            min = a[i];
        }
    }
    sort(a.begin(), a.end());
    // 2 3 4 3 2
    // 2 2 3 4 3
    int composition = 1;
    for (int i = 1; i < n; i++) {
        composition *= a[i];
    }
    int result = (min + 1) * composition;
    cout << result << '\n';

}
int main() {
    int t;
    cin >> t;
    while(t--) {
        my_solve();
    }
}
