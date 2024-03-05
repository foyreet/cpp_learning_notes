#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    bool flag = false;
    vector<int> a = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for (int el : a) {
        if (n % el == 0) {
            flag = true;
        }
    }
    if (flag) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

int main() {
    solve();
}