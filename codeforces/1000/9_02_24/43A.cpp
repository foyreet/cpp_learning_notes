#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> a;
    for (int i = 0; i < n; i++) {
        string el;
        cin >> el;
        a.push_back(el);
    }
    int index;
    int count_1 = 0;
    for (int i = 1; i < n; i++) {
        if (a[0] != a[i]) {
            count_1++;
            index = i;
        }
    }
    int count_2 = n - count_1;
    if (count_1 > count_2) {
        cout << a[index];
    } else if (count_1 < count_2) {
        cout << a[0];
    }
}
int main() {
    solve();
}