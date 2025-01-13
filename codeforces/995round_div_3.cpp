#include <iostream>
#include <vector>
using namespace std;
void A() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        int sum_Monokarp = 0;
        int sum_Stereokarp = 0;
        int result;
        cin >> n;
        vector<int> a;
        vector<int> b;
        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            a.push_back(value);
        }
        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            b.push_back(value);
        }
        for (int i = 0; i < n - 1; i++) {
            if (a[i] >= b[i+1]) {
                sum_Monokarp += a[i];
                sum_Stereokarp += b[i+1];
            }
        }

        // Last element always have Monokarp
        result = sum_Monokarp + a.back() - sum_Stereokarp;
        cout << result << endl;
    }
}
// Разобрал задачу B (сам не решил, не проходило по времени делал за O(n) надо было за O(1))
void B() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int sum = a + b + c;
        int count = n / sum * 3;
        if (n % sum == 0) {
            cout << count << endl;
        } else if (n % sum <= a) {
            cout << count + 1 << endl;
        } else if (n % sum <= a + b) {
            cout << count + 2 << endl;
        } else {
            cout << count + 3 << endl;
        }
    }
}
int main() {
    B();
}