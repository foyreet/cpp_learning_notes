#include <iostream>
#include <vector>
#include <set>

using namespace std;

void A_924() {
    int a, b;
    cin >> a >> b;
    if (a % 2 == 1 && b % 2 == 1) {
        cout << "NO\n";
    } else if (a % 2 == 1 && b % 2 == 0 && b / 2 == a) {
        cout << "NO\n";
    } else if (a % 2 == 0 && b % 2 == 1 && a / 2 == b) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

void parsing_B_924() {
    int n;
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; i++) {
        int el;
        cin >> el;
        a.insert(el);
    }

    vector<int> v(a.begin(), a.end()); // передаём в вектор set
    // 1 2 7 9 10 12 13
    int l = 0;
    int ans = 0;
    for (int r = 0; r < v.size(); r++) {
        while (v[r] - v[l] >= n) {
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        parsing_B_924();
    }
}