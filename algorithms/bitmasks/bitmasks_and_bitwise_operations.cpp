/*
 Поразрядные операции
 1) &
 x y (x & y)
 0 0   0
 0 1   0
 1 0   0
 1 1   1

 Проверка на чётность
 x & 1 = 0 - x чётно
 100 - 4
 001 - 1
 000 - 0
 x & 1 = 1 - x нечётно
 101 - 5
 001 - 1
 001 - 1

 x делится нацело на 2^k если x & (2^k - 1) = 0

 k = 2
 x = 8
  1000
  0011
  0000

 2) Или (||)
 x y x || y
 0 0  0
 0 1  1
 1 0  1
 1 1  1

 3) XOR (^) mod 2

 x y  x ^ y
 0 0   0
 0 1   1
 1 0   1
 1 1   0

 4) Операция не ~
 ~x = -x-1
 ~29 = -30;

 5) Поразрядные сдвиги

 Быстрое деление на 2
 a >> x  a / (2 ^ x)

 15(1111) >> 1  7(111)

 Быстрое умножение на 2
 a << x  a * (2 ^ x)

 15(1111) << 1  30(11110)

 Битовые маски

 1 << k (int) - это битовая маска 1(0...0) - k нулей
 1LL << k - битовая маска типа long long
x степень 2 - ки, когда x & (x-1) = 0
 */

#include <iostream>
#include <vector>

using namespace std;

// Двоичное представлениие числа x
void binary_representation_of_a_number() {
    int x;
    cin >> x;
    for (int k = 8; k >= 0; k--) {
        if (x & (1 << k)) cout << "1";
        else cout << "0";
    }
}

void functions_for_counting_1_and_0() {
    int x;
    cin >> x;
    // поддерживают тип int
    // Для long long int64_t дописать на конце
    cout << __builtin_clz(x) << '\n'; // Количество нулей в начале двоичного представления
    cout << __builtin_ctz(x) << '\n'; // Количество нулей в конце двоичного представления
    cout << __builtin_popcount(x) << '\n'; // Количество 1 в двоичном представлении
    cout << __builtin_parity(x) << '\n'; // Чётность кол-ва 1 в 2 - ом представлении
}
// Проверка на сумму x
/* 1 2 3 4 5
 * 1 0 0 1 1
  x = 10 Yes 1 4 5
*/
void bitmask_find_sum() {
    vector<int> a;
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        int el;
        cin >> el;
        a.push_back(el);
    }
    // O(2^n * n)
    // n = 24(1 сек) и n = 25(2 сек) может зайти
    for (int mask = 0; mask < (1 << n); mask++) {
        int curSum = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                curSum += a[i];
            }
        }

        if (curSum == x) {
            cout << "YES\n";
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    cout << i + 1 << ' ';
                }
            }
            cout << " ";
            return;
        }
    }

    cout << "NO";
}

int main() {
    bitmask_find_sum();
}