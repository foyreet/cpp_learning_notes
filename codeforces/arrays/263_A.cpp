#include <iostream>
#include <vector>
using std::vector;
int main() {
    int rows = 5;
    int cols = 5;
    vector<vector<int>> twoVector(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> twoVector[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (twoVector[i][j] == 1) {
                std::cout << abs(i - 2) + abs(j - 2);
            }
        }
    }


}