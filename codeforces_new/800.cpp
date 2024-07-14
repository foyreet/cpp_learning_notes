#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
using namespace std;

void A_1955() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b, res;
        cin >> n >> a >> b;
        if (b < 2*a) {
            res = n/2 * b + ((n%2) * a);
        } else if (b >= 2*a) {
            res = n/2 * a + ((n - (n/2)) * a);
        }
        cout << res << endl;
    }
}

void A_1987() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int res;
        res = (n-1) * (k-1) + n;
        cout << res << endl;
    }
}

void my_solve_A_1986() {
    int t;
    cin >> t;
    while (t--) {
        int x1, x2, x3, res;
        cin >> x1 >> x2 >> x3;
        if ((x2 >= x1 && x2 <= x3) || (x2 >= x3 && x2 <= x1)) {
            res = abs(x2 - x1) + abs(x2-x3);
        } else if ((x1 >= x2 && x1 <= x3) || (x1 >= x3 && x1 <= x2)) {
            res = abs(x1 - x2) + abs(x1 - x3);
        } else if ((x3 >= x1 && x3 <= x2) || (x3 >= x2 && x3 <= x1)) {
            res = abs(x3 - x2) + abs(x3 - x1);
        }
        cout << res << endl;
    }
}

void author_solve_A_1986() {
    int t;
     cin >> t;
     while (t--) {
         int x1, x2, x3;
         cin >> x1 >> x2 >> x3;
         cout << max({x1, x2, x3}) - min({x1, x2, x3}) << endl;
     }
}

    void A_1980() {
        int t;
        cin >> t;
        while (t--) {
            int n, m;
            cin >> n >> m;
            string s;
            cin >> s;
            map<char, int> count;
            int result = 0;
            for (char c : s) {
                if (c >= 'A' && c <= 'G') {
                    count[c]++;
                 }
            }
            for (char c = 'A'; c <= 'G'; ++c) {
                if (count[c] < m) {
                    result += m - count[c];
                }
            }
            cout << result << endl;
        }
    }

    void A_1977() {
        int t;
        cin >> t;
        while(t--) {
            int n, m;
            cin >> n >> m;
            cout << ((n >= m && (n - m) % 2 == 0) ? "YES" : "NO") << endl;
        }
    }

    int main() {

    }