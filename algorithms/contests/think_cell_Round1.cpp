#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

void A() {
    int count = 0;
    int sum = 0;
    int n;
    cin >> n;
    int size = 2 * n;
    int max_count = 0;
    vector<int> a(size);
    for (int i = 0; i < size; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int l = 0;
    for (int r = 1; r < a.size(); r++) {
        count = min(a[l], a[r]);
        sum += count;
        r += 1;
        l += 2;
    }
    cout << sum << '\n';
}

void B_razbor() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        a.push_back(n-i);
        a.push_back(i+1);
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

}
int main() {
    int t;
    cin >> t;
    while (t--) {
        B_razbor();
    }
}