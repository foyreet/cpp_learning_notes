#include <iostream>
#include <vector>
using ll = long long;
using namespace std;
vector<ll> t;
int n;
void build_segment_tree(vector<int> a) {
    // Проверка на степень 2 - ки
    n = 1;
    while (n < a.size()) n *= 2;
    // Заполнение массива t размера 2n 0
    t.assign(2 * n, 0);
    // Заполнение массива t массивом a
    for (int i = 0; i < a.size(); ++i) {
        t[i + n] = a[i];
    }
    // Заполнение массива t след слоями с n-1 до 0 индекса
    for (int i = n - 1; i > 0; --i) {
        t[i] = t[i * 2] + t[i * 2 + 1];
    }
}

// Функция изменения элемента в дереве отрезков

void upd(int i, int x) {
    t[i += n] = x;
    for (i /= 2; i > 0; i /= 2) { // Поднимаемся вверх к вершине
        t[i] = t[2 * i] + t[2 * i + 1];
    }
}

// Функция нахождения суммы на отрезке от l до r

ll sum(int l, int r) {
    ll res = 0;
    for (l += n, r += n; l <= r; l /= 2, r /= 2) {
        if (l % 2 == 1) res += t[l++];
        if (r % 2 == 0) res += t[r--];
    }
    return res;
}

int main() {
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for (auto &it: a) cin >> it;
    build_segment_tree(a);
    while (m--) {
        int count, i, v;
        cin >> count >> i >> v;
        if (count == 1) {
            upd(i, v);
        } else if (count == 2) {
            cout << sum(i, v - 1) << '\n';
        }
    }
}
