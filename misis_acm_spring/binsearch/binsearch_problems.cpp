#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Бинпоиск
/*
 Сложность O(log n)
lower_bound ищет первый элемент такой что a[i] >= x
upper_bound ищет первый элемент такой что a[i] > x

Посмотреть бинпоиск по ответу
 */
int binsearch(vector<int> &a, int value) {
    int l = 0, r = a.size() - 1;
    while (l <= r) {
        int m = l + (r - l) / 2; // чтобы не было переполнения
        if (a[m] == value) {
            return m;
        }
        if (a[m] < value) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return -1;
}

// Нахождение первого вхождения элемента (lower_bound)
int lower_bound(const vector<int>& a, int x) {
    int l = -1, r = a.size();
    while(r - l > 1) {
        int m = (l + r) / 2;
        if (a[m] >= x) {
            r = m;
        } else {
            l = m;
        }
    }
    return l+1;
}


// Нахождение последнего вхождения элемента (upper_bound)
int upper_bound(const vector<int>& a, int x) {
    int l = -1, r = a.size();
    while(r - l > 1) {
        int m = (l + r) / 2;
        if (a[m] > x) {
            r = m;
        } else {
            l = m;
        }
    }
    return l+1;
}

// Бинарный поиск по ответу

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for (auto& it : a) cin >> it;
    sort(a.begin(), a.end());

}
