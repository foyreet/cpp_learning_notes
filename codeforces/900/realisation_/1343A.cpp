#include <iostream>
#include <cmath>

using namespace std;

int solve() {
    int n;
    cin >> n;
    for (int i = 2; i < n; i++) {
        double summa_geometric_progression = pow(2, i) - 1;
        if (n % static_cast<int>(summa_geometric_progression) == 0) {
            cout << n / static_cast<int>(summa_geometric_progression) << "\n";
            break;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}