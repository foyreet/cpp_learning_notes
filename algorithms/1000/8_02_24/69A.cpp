#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int rows;
    int columns = 3;
    cin >> rows;
    vector<vector<int>> vec(rows, vector<int> (columns));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> vec[i][j];
        }
    }

    int sum = 0;
    bool flag = true;
    for (int j = 0; j < columns; j++) {
        for (int i = 0; i < rows; i++) {
            sum += vec[i][j];
        }
        if (sum == 0) {
            flag;
        } else {
            flag = false;
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
