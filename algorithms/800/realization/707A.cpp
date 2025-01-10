#include <iostream>
#include <vector>
using std::vector;
int solve() {
    int line, columns;
    std::cin >> line >> columns;
    vector<vector<char>> a(line, vector<char>(columns));
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < columns; j++) {
            std::cin >> a[i][j];
        }
    }
    int count_false = 0;
    bool isBlackAndWhite = true;
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < columns; j++) {
            if (a[i][j] == 'W' || a[i][j] == 'G' || a[i][j] == 'B') {
                isBlackAndWhite = true;
            } else if (a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y') {
                isBlackAndWhite = false;
                    count_false++;
            }
        }
    }
    if (count_false >= 1) {
        std::cout << "#Color";;
    } else {
        std::cout << "#Black&White";
    }
}
int main() {
    solve();
}