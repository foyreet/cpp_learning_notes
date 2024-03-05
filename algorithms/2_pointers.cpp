#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void B_279() {
    int n, t;
    cin >> n >> t;

    vector<int> a;
    for (int i = 0; i < n; i++) {
        int el;
        cin >> el;
        a.push_back(el);
    }

    int count = 0;
    int sum = 0;
    int l = 0;
    for (int r = 0; r < n; r++) {
        sum += a[r];
        while (sum > t) {
            sum -= a[l];
            l++;
        }
        count = max(count, r - l + 1);
    }
    cout << count;
}

void C_1133() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    int l = 0;
    int count = 0;

    for (int r = 0; r < n; r++) {
        while (a[r] - a[l] > 5) {
            l++;
        }
        count = max(count, r - l + 1);
    }
    cout << count;
}

void C_1006() {
    
}

int main() {

}
