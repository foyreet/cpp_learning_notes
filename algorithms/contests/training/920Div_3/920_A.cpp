#include <iostream>
#include <cmath>

using namespace std;

void my_solve() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    if (y1 == y2) {
        int ras1 = abs(x1 - x2);
        cout << pow(ras1, 2) << '\n';
    }
    else if (y1 == y3) {
        int ras2 = abs(x1 - x3);
        cout << pow(ras2, 2) << '\n';
    }
    else if (y1 == y4) {
        int ras3 = abs(x1 - x4);
        cout << pow(ras3, 2) << '\n';
    }
    else if (y2 == y3) {
        int ras4 = abs(x2 - x3);
        cout << pow(ras4, 2) << '\n';
    }
    else if (y2 == y4) {
        int ras5 = abs(x2 - x4);
        cout << pow(ras5, 2) << '\n';
    }
    else if (y3 == y4) {
        int ras6 = abs(x3 - x4);
        cout << pow(ras6, 2) << '\n';
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        my_solve();
    }
}