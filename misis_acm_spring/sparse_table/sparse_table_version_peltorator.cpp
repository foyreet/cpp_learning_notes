#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/*
 Разреженные таблицы мы можем строить для разных идемпотентных операций
 Например: max, min, gcd
 Идемпотентность - это если мы сохраним тот же результат при добавлении тех же самых элементов
 a∘a=a
 Например min(a, a) = a ; max(a, a) = a; gcd(a, a) = a

 time : O(nlogn)
 memory : O(nlogn)
 request : O(1)
 */
vector<vector<int>> build_sparse_table(const vector<int> &arr) {
    size_t n = arr.size();
    int max_pow = ceil(log2(n+1));
    vector<vector<int>> sparse(max_pow, vector<int>(n, 0));
    sparse[0] = arr;
    for (int k = 0; k + 1 < max_pow; k++) {
        for (int ind = 0; ind + (1 << k) < n; ind++) {
            sparse[k + 1][ind] = min(sparse[k][ind], sparse[k][ind + (1 << k)]);
        }
    }
    return sparse;
}

int find_min(const vector<vector<int>>& sparse, int l, int r) {
    int len = r - l + 1;
    int power = log2(len);
    return min(sparse[power][l], sparse[power][r - (1 << power) + 1]);
}


int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto& it : nums) cin >> it;
    vector<vector<int>> sparse = build_sparse_table(nums);
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << find_min(sparse,l , r) << '\n';
    }

    return 0;
}