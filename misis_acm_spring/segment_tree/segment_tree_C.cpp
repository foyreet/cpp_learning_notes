#include <iostream>
#include <vector>
#include <algorithm>
using ll = long long;
using namespace std;
vector<ll> t_min;
vector<ll> t_max;
size_t n;
/*
 Строим O(n)
 Запрос O(log^2 n)
 Изменение O(log n)
 */

// Заполнение ДО для минимума
void build_segment_tree_min(const vector<int>& a) {
    // Проверка на степень 2 - ки
    n = 1;
    while (n < a.size()) n *= 2;
    // Заполнение массива t размера 2n
    t_min.assign(2 * n, 0);
    // Заполнение массива t массивом a
    for (size_t i = 0; i < a.size(); ++i) {
        t_min[i + n] = a[i];
    }
    // Заполнение массива t след слоями с n-1 до 0 индекса
    for (size_t i = n - 1; i > 0; --i) {
        t_min[i] = min(t_min[i * 2], t_min[i * 2 + 1]);
    }
}

// Функция изменения элемента в ДО для минимума
void upd_min(int i, int x) {
    i += n;
    t_min[i] = x;
    for (i /= 2 ; i > 0; i /= 2) { // Поднимаемся вверх к вершине
        t_min[i] = min(t_min[i * 2], t_min[i * 2 + 1]);
    }
}

// Нерекурсивная функция нахождения минимума на отрезке от l до r
ll get_min(int l, int r) {
    ll res = 1e9;
    for (l += n, r += n; l <= r; l /= 2, r /=2) {
        if (l % 2 == 1) res = min(res, t_min[l++]);
        if (r % 2 == 0) res = min(res, t_min[r--]);
    }
    return res;
}

// Заполнение ДО для максимума
void build_segment_tree_max(const vector<int>& a) {
    // Проверка на степень 2 - ки
    n = 1;
    while (n < a.size()) n *= 2;
    // Заполнение массива t размера 2n
    t_max.assign(2 * n, 0);
    // Заполнение массива t массивом a
    for (size_t i = 0; i < a.size(); ++i) {
        t_max[i + n] = a[i];
    }
    // Заполнение массива t след слоями с n-1 до 0 индекса
    for (size_t i = n - 1; i > 0; --i) {
        t_max[i] = max(t_max[i * 2], t_max[i * 2 + 1]);
    }
}

// Функция изменения элемента в ДО для максимума
void upd_max(int i, int x) {
    i += n;
    t_max[i] = x;
    for (i /= 2 ; i > 0; i /= 2) { // Поднимаемся вверх к вершине
        t_max[i] = max(t_max[i * 2], t_max[i * 2 + 1]);
    }
}

// Нерекурсивная функция нахождения максимума на отрезке от l до r
ll get_max(int l, int r) {
    ll res = -1e9;
    for (l += n, r += n; l <= r; l /= 2, r /=2) {
        if (l % 2 == 1) res = max(res, t_max[l++]);
        if (r % 2 == 0) res = max(res, t_max[r--]);
    }
    return res;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int size, m;
    cin >> size >> m;
    vector<int> a(size, 0);
    build_segment_tree_min(a);
    build_segment_tree_max(a);
    while (m--) {
        int count, l, r, i, x;
        cin >> count;
        if (count == 1) {
            cin >> l >> r;
            l--, r--;
            cout << get_max(l, r) - get_min(l, r) << '\n';
        }
        if (count == 2) {
            cin >> i >> x;
            i--;
            upd_max(i, x);
            upd_min(i, x);
        }
    }
}
