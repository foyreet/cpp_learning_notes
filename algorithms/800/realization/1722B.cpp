#include <iostream>
#include <string>

using namespace std;

void my_solve() {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int count_identical = 0;
    for (int i = 0; i < n; i++) {
        if ((s1[i] == 'G' && s2[i] == 'B') || (s1[i] == 'B' && s2[i] == 'G')) {
            count_identical++;
        }
        if (s1[i] == s2[i]) {
            count_identical++;
        }
    }
    count_identical == n ? cout << "YES\n" : cout << "NO\n";
}

void author_solve() {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < n; i++) {
        if (s1[i] == 'R') {
            if (s2[i] != 'R') {
                cout << "NO\n";
                return;
            }
        } else {
            if (s2[i] == 'R') {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        author_solve();
    }
}
