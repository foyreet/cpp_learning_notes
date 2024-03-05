#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void A() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int firstIndex = 0;
    while (a[firstIndex] != 1) firstIndex++;

    int lastIndex = n - 1;
    while (a[lastIndex] != 1) lastIndex--;

    int counter = 0;
    for (int i = firstIndex; i < lastIndex; i++) {
        if (a[i] == 0) {
            counter++;
        }
    }

    cout << counter << '\n';
}

void B() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int sum_a = 0;

    for (int i = 0; i < n; i++) {
        sum_a += a[i];
    }
    vector<int> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];

    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i < n; i++) {
        if (x[i] > 0) {
            pos.push_back(x[i]);
        } else {
            neg.push_back(x[i]);
        }
    }

    int sum_pos_x = 0;
    int sum_neg_x = 0;

    for (int i = 0; i < pos.size(); i++) {
        sum_pos_x += pos[i];
    }

    for (int i = 0; i < neg.size(); i++) {
        sum_neg_x += abs(neg[i]);
    }

    int sum_x = sum_pos_x + sum_neg_x;

    if (sum_x * k > sum_a) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        B();
    }
}