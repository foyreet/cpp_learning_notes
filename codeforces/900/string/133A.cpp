#include <iostream>
#include <string>

using namespace std;

void my_solve() {
    string p;
    cin >> p;
    bool flag = true;
    for (char c : p) {
        if (c == 'H' || c == 'Q' || c == '9') {
            flag = true;
            break;
        } else {
            flag = false;
        }
    }
    if (flag) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    my_solve();
}
