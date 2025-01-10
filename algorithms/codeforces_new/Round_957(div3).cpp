#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// Подсмотрел идею. Нужно на каждом шаге прибавлять к минимальному
void A() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        for (int i = 0; i < 5; i++) {
            if (a <= b && a <= c) {
                ++a;
            } else if (b <= a && b <= c) {
                ++b;
            } else {
                ++c;
            }
        }
        int result = a * b * c;
        cout << result << endl;
    }
}

void B() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        int sum = 0;
        cin >> n >> k;
        vector<int> a(k);
        for (auto &it: a) cin >> it;
        sort(begin(a), end(a));

        for (int i = 0; i < k-1; i++) {
            sum += 2*a[i];
        }
        sum -= k-1;
        cout << sum << endl;
    }
}

void C() {

}


int main() {

}