#include <iostream>
#include <cmath>
using namespace std;

int solve() {
    int n;
    cin >> n;
    int penultimate = abs((n / 10) % 10);
    int last = abs(n % 10);
    if (n > 0) {
        cout << n;
    } else {
        if (penultimate <= last) {
            cout << n / 10;
        } else {
            cout << (n/100) * 10 - last;
        }
    }
}

int main() {
    solve();
}
