#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void A() {
    int count_A = 0;
    int count_B = 0;
    string s;
    cin >> s;
    for(char c : s) {
        if (c == 'A') {
            count_A++;
        } else {
            count_B++;
        }
    }
    if (count_A >= count_B) {
        cout << "A\n";
    } else {
        cout << "B\n";
    }
}

void B() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
     }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1) {
                sum += a[i][j];
            }
        }
        if (sum == 2 * i - 1) {
            cout << "TRIANGLE\n";
        } else if (sum == n){
            cout << "SQUARE\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        B();
    }
}
