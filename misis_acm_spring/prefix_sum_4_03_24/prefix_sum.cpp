/*
 Префиксные суммы
 Нахождение суммы элементов на полуинтервале [l,r]
 prefixsum[i+1] = prefixsum[i] + nums[i];

 Ответ на запрос суммы на отрезке
На полуинтервалах:
sum(L,R) = prefixsum[R] - prefixsum[L];

 Операции должны быть обратимыми + и ^(xor)
 Нахождение min - не обратимая операция
 */

#include <iostream>
#include <vector>

using ll = long long;
using namespace std;

vector<long long> findPrefixSums1D(const vector<long long> &a) {
    size_t n = a.size();
    vector<long long> prefix_sums(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix_sums[i + 1] = prefix_sums[i] + a[i];
    }
    return prefix_sums;
}

vector<vector<ll>> findPrefixSums2D(const vector<vector<ll>>& a) {
    int n = a.size();
    int m = a[0].size(); //
    vector<vector<ll>> prefixSums1D(n);
    for (int i = 0; i < n; i++) {
        prefixSums1D[i] = findPrefixSums1D(a[i]);
    }
    vector<vector<ll>> prefixSums2D(n+1, vector<ll> (m+1, 0));
    for (int j = 1; j <= m; j++) {
        for (int i = 0; i < n; i++) {
            prefixSums2D[i+1][j] = prefixSums2D[i][j] + prefixSums1D[i][j];
        }
    }
    return prefixSums2D;
}

// request sequence
long long rsq(const vector<ll> &prefix_sums, const int &l, const int &r) {
    return prefix_sums[r] - prefix_sums[l - 1];
}


/* Префиксные ксоры
    xor - это обратимая операция
    (a ^ b) ^ b = a (реверсивность)
*/

vector<int> findPrefixXor(const vector<int> &arr) {
    size_t n = arr.size();
    vector<int> prefix_xor(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix_xor[i + 1] = prefix_xor[i] ^ arr[i];
    }
    return prefix_xor;
}

// Нахождение суммы на отрезке
void A_find_sum_on_section() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &it: a) cin >> it;
    auto prefix_sums = findPrefixSums1D(a);
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << rsq(prefix_sums, l, r) << '\n';
    }

}
/*
 Однажды Никита нашел строку, состоящую только из символов «a» и «b».
Никита считает, что строка красивая, если её можно разрезать на 3 строки (возможно, нулевой длины) так,
 что, не меняя порядок, 1-я и 3-я состоят только из букв «a», а 2-я только из букв «b».
Никита хочет сделать строку красивой, выкинув из нее некоторые символы (или не выкидывая их вовсе),
 но не меняя их порядок. Какой наибольшей длины строку он сможет получить?

 Входные данные
В первой строке содержится непустая строка, длиной не более 5000,
 состоящая только из строчных букв латинского алфавита «a» и «b».

Выходные данные
Выведете одно число — максимально возможную длину получившейся красивой строки.
 */

void A_Nikita_and_string() {

}
/*
 Лааксонен
 CSES.FI
 leetcode
 Линейные алгоритмы O(n)
 Префиксные суммы
 2 * 10^8 количество операций которое с++ может сделать за 1 секунду
 Можно вызвать префиксные суммы
[a.begin(), a.end()]
partial_sum(a.begin(), a.end()) - позволяет считать префиксные суммы
adjacent_difference(a.begin(), a.end()) - позволяет считать разностные массивы
 */
void C_misis() {
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n,vector<ll> (m));
    for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < m; j++) {
            cin >> a[i][j];
        }
    }
    auto prefix_sums2D = findPrefixSums2D(a);

    ll max = prefix_sums2D[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (prefix_sums2D[i][j] > max) {
                max = prefix_sums2D[i][j];
            }
        }
    }
    cout << max;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

}
