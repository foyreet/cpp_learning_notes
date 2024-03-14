#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> st;
vector<int> arr;

int get_min(int l, int r) {
    int j = arr[r - l + 1];
    return min()
}


void A() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; ++i) {
        st[i][0] = a[i];
    }
    for (int j = 1; j < 20; ++j) {
        for (int i = 0; i + (1 << j) - 1 < n; ++i) {
            st[i][j] = min(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
        }
    }
    arr.assign(n + 1, 0);
    for (int j = 1; (1 << j) <= n; ++j) {
        arr[1 << j] = j;
    }
    for (int j = 3; j <= n; ++j) {
        if (arr[j] == 0) arr[j] = arr[j - 1];
    }
}

int main() {

}
