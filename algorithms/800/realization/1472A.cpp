#include <iostream>

using namespace std;

void my_solve() {
    int w, h, n;
    cin >> w >> h >> n;

    if (w % 2 != 0 && h % 2 != 0) {
        n == 1 ? cout << "YES\n" : cout << "NO\n";
    }
    // 3 8 5
    if (w % 2 != 0 && h % 2 == 0 && h % 4 != 0) {
        (n == 2) ? cout << "YES\n" : cout << "NO\n";
    } else if (w % 2 != 0 && h % 2 == 0 && h % 4 == 0) {
        if (h >= n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    else if (w % 2 == 0 && h % 2 != 0 && w % 4 != 0) {
        (n == 2) ? cout << "YES\n" : cout << "NO\n";
    }   else if (w % 2 == 0 && h % 2 != 0 && w % 4 == 0) {
            if (w >= n) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
    }
    // 1 4 4
    // 60 6 5
    // 30 3 30 3 30 3 30 3
    // 6 10 5
    // 3 10 3 10 - > 3 5 3 5 3 5 3 5
    if (w % 2 == 0 && h % 2 == 0 && n >= 1) {
        cout << "YES\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        my_solve();
    }
}