#include <iostream>
#include <vector>
using namespace std;
void A() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a = n/10;
        int b = n % 10;
        int result = a + b;
        cout << result << endl;
    }
}
int compareValues(int a, int b) {
    if (a > b) return 1;
    if (a == b) return 0;
    if (a < b) return -1;
}
void B() {
    int t;
    cin >> t;
    while (t--) {
        int ans = 0;
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        if (compareValues(a1, b1) + compareValues(a2, b2) > 0) ans += 1;
        if (compareValues(a1, b2) + compareValues(a2, b1) > 0) ans += 1;
        if (compareValues(a2, b1) + compareValues(a1, b2) > 0) ans += 1;
        if (compareValues(a2, b2) + compareValues(a1, b1) > 0) ans += 1;
        cout << ans << endl;
    }
}

void C() {
    int t;
    cin >> t;
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        int rows = n;
        int columns = 2;
        bool flag = false;
        vector<vector<int>> matrix(n, vector<int>(2));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                cin >> matrix[i][j];
            }
        }

        for (int i = 0; i < rows - 1; i++) {
            for (int j = 0; j < columns; j++) {
                if (matrix[i+1][0] - matrix[i][1] >= s) {
                    flag = true;
                    break;
                }
            }
        }

        if (matrix[0][0] >= s) {
            flag = true;
        }
        if (m - matrix[rows - 1][1] >= s) {
            flag = true;
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
int main() {
    C();
}