#include <iostream>

using namespace std;

int solve() {
    int n, m;
    cin >> n >> m;
    if (n % 2 != 0 && m % 2 == 0) {
        cout << "Malvika";
    } else if (n % 2 == 0 && m % 2 == 0) {
        cout << "Malvika";
    } else if (n % 2 == 0 && m % 2 != 0) {
        cout << "Malvika";
    } else if (n % 2 != 0 && m % 2 != 0) {
        cout << "Akshat";
    } else if (n == 1) {
        cout << "Akshat";
    }
}

int main() {
    solve();
}
