#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void A() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int sum = 0;
    for (int i = 0 ; i < n; i++) {
        if (i >= 1 && i <= n - 1) {
            sum += a[i] - a[i - 1];
        }
    }
    cout << sum << '\n';
}

int div_up(int x, int y) {
    return (x + y - 1) / y;
}

void B() {
    int n, k;
    cin >> n >> k;
    if (k == 4*n - 2) {
        cout << n * 2 << '\n';
    } else {
        cout << div_up(k, 2) << '\n';
    }

}

void C_problem_analysis() {
    int k, x, a;
    cin >> k >> x >> a;
    k--; x++; int p = 0;

    while (x--) {
        p += p/k+1;
        if (p > a) break;
    }
    if (p <= a) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        C_problem_analysis();
    }
}