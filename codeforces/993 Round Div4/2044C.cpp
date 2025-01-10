#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int sum = 0;
        if (a >= m) {
            sum += m;
        } else {
            sum += a;
        }
        if (b >= m) {
            sum += m;
        } else {
            sum += b;
        }
        if (2*m - sum >= c) {
            sum += c;
        } else {
            sum += 2*m - sum;
        }
        cout << sum << endl;
    }
}
