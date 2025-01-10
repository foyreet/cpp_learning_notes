#include <iostream>
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

int main() {
    B();
}