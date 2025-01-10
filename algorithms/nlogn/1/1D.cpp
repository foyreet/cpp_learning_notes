#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    cout << (1 << n) - 1 - n;
}

int main() {
    solve();
}