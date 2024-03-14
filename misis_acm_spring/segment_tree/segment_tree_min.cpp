#include <iostream>
#include <vector>
#include <algorithm>
using ll = long long;
using namespace std;
vector<ll> t;
size_t n;
// Задача нахождения минимума

// Заполнение ДО для минимума
void build_segment_tree_min(const vector<int>& a) {
    // Проверка на степень 2 - ки
    n = 1;
    while (n < a.size()) n *= 2;
    // Заполнение массива t размера 2n
    t.assign(2 * n, INT_MAX);
    // Заполнение массива t массивом a
    for (size_t i = 0; i < a.size(); ++i) {
        t[i + n] = a[i];
    }
    // Заполнение массива t след слоями с n-1 до 0 индекса
    for (size_t i = n - 1; i > 0; --i) {
        t[i] = min(t[i * 2], t[i * 2 + 1]);
    }
}

// Функция изменения элемента в ДО для минимума
void upd_min(int i, int x) {
    t[i += n] = x;
    for (i /= 2; i > 0; i /= 2 ) { // Поднимаемся вверх к вершине
        t[i] = min(t[i * 2], t[i * 2 + 1]);
    }
}

// Функция нахождения минимума на отрезке от l до r
ll get_min(int l, int r) {
    ll res = LLONG_MAX;
    for (l += n, r += n; l <= r; l /= 2, r /= 2) {
        if (l % 2 == 1) res = min(res, t[l++]);
        if (r % 2 == 0) res = min(res, t[r--]);
    }
    return res;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for (auto &it: a) cin >> it;
    build_segment_tree_min(a);
    while (m--) {

    }
}
