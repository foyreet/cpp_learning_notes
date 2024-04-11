#include <iostream>
#include <vector>

using namespace std;

const int k = 300;

int sum(int l, int r, vector<int>& a, vector<int>& add) {
    int res = 0;
    if (r - l < k) {
        for (int i = l; i <= r; i++) {
            res += a[i];
        }
    }
    else {
        while (l % k) {
            res += a[l++];
        }
        while ((r + 1) % k) {
            res += a[r--];
        }
        l /= k; r /= k;
        for (int j = l; j <= r; ++j) {
            res += a[j] + add[j];
        }
    }
    return res;
}

int upd(int l, int r, int x, vector<int>& sum, vector<int>& add, vector<int>& a) {
    int res = 0;
    if (r - l < k) {
        for (int i = l; i <= r; i++) {
            res += a[i];
        }
    }
    else {
        while (l % k) {
            res += a[l++] + x;
        }
        while ((r + 1) % k) {
            res += a[r--] + x;
        }
        l /= k; r /= k;
        for (int j = l; j <= r; ++j) {
            res += sum[j] + k * add[j];
        }
    }
    return res;
}
int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (auto& el : a) cin >> el;
    vector<int> add(n / k);
    while (a.size() % k) {
        a.push_back(0);
    }
    n = a.size();
    vector<int> sum(n / k);
    for (int i = 0; i < n; i++) {
        sum[i / k] += a[i];
    }
    while (q--) {
        int count, l, r, i, x;
        cin >> count;
        if (count == 1) {
            cin >> l >> r;
            l--, r--;
            sum(l, r)
        }
        if (count == 2) {
            cin >> l >> r >> x;


        }
    }
}
