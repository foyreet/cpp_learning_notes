#include <iostream>
#include <string>

using namespace std;

void my_solve() {
    int x{0}, y{0};
    int n;
    cin >> n;
    string s;
    cin >> s;

    // UUURDDL
    // x = 0; y = 2
    // Предположим, что мы не попадём в точку (1, 1)
    bool flag = false;
    for (char c: s) {
        if (c == 'U') {
            y++;
        } else if (c == 'D') {
            y--;
        } else if (c == 'R') {
            x++;
        } else if (c == 'L'){
            x--;
        }

        if (x == 1 && y == 1) {
            // Моё преположение не верно
            flag = true;
            break;
        }
    }

    if (flag) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        my_solve();
    }
}

