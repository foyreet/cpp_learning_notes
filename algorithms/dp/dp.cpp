
// One-dimensional dynamic programming
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dp_fib() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, 0);

    dp[0] = dp[1] = 1;

    for (int i = 2; i < n + 1; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    for (int i = 0; i < n; i++) {
        cout << dp[i] << " ";
    }
}

/*
 Задача про ступеньки
 Поднимаемся на 1, 2, 3 ступеньки
 Сколькими различными способами мы можем попасть на ступеньку с номером
 */
void number_of_ways_1_2_3_step() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, 0);

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 4; i < n + 1; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }

    cout << dp[n];
}

/*
 Задача про кенгуру который перепрыгивает с 1 до k клеток
 АиСД S01E10. Динамическое программирование Павел Маврин
 O(nk)
 */

void kangaroo_1_k() {
    int n, k;
    cin >> n >> k;

    vector<int> dp(n, 0);
    dp[0] = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= k; j++) {
            if (i - j >= 0) {
                dp[i] += dp[i - j];
            }
        }
    }
    cout << dp[n-1];
}

/*
 Задача про кенгуру, который перепрыгивает с 1 до k клеток
 оптимизация за O(n) с помощью идеи префиксных сумм
 */

void kangaroo_1_k_optimization() {
    int n, k;
    cin >> n >> k;

    vector<int> dp(n, 0);
    dp[0] = 1; int s = 1;
    for (int i = 1; i < n; i++) {
        dp[i] = s;
        s += dp[i];
        if (i - k >= 0) {
            s -= dp[i-k];
        }
    }
    cout << dp[n-1];
}
// Задача про ступеньки со стоимостью и их оптимизации

/*
 Задача про ступеньки со стоимостью
 Поднимаемся на 1 или 2 ступеньки
 за посещение i ступеньки получаем a[i] руб
 Нужно максимизировать сумму
 */
void max_sum_1_2_step() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, 0);
    dp[0] = 0;
    vector<int> cost(n);
    for (int i = 0; i < n; i++) cin >> cost[i];

    for (int i = 2; i < n + 1; i++) {
        dp[i] = cost[i] + max(dp[i - 1], dp[i - 2]);
    }

    for (int i = 0; i < n + 1; i++) {
        cout << dp[i] << " ";
    }

}

/*
 Восстановление ответа
 Смотрим для каждого состояния предыдущее состояние
 АИСД
 */

void recovery_answer() {
    int n;
    cin >> n;
    vector<int> dp(n, 0);
    vector<int> cost(n);
    for (int i = 0; i < n; i++) cin >> cost[i];
    dp[0] = 0;
    dp[1] = cost[1];
    for (int i = 2; i < n; i++) {
        dp[i] = cost[i] + max(dp[i - 1], dp[i - 2]);
    }

    vector<int> answer;
    int i = n - 1;
    while (i != 0) {
        if (dp[i - 1] + cost[i] == dp[i]) {
            i = i - 1;
        } else {
            answer.push_back(i);
            i = i - 2;
        }
    }
    reverse(answer.begin(), answer.end());
    for (int number : answer) {
        cout << number << " ";
    }
}

// Two-dimensional dynamic programming

/*
 Задача про черепашку
 Максимизировать сумму чисел клеток которую черепашка посетила
 Время работы O(n*m)
 Время памяти O(m)
 */

void turtle_two_dimensional_max() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> cost(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> cost[i][j];
        }
    }
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            dp[i][j] = cost[i - 1][j - 1] + max(dp[i][j - 1], dp[i - 1][j]);
        }
    }

    cout << dp[n][m];
}

/*
 Задача про черепашку
 Минимизировать сумму чисел клеток которую черепашка посетила
 */

void turtle_two_dimensional_min() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> cost(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> cost[i][j];
        }
    }
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, INFINITY));
    dp[1][1] = cost[0][0];
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            dp[i][j] = cost[i - 1][j - 1] + min(dp[i][j - 1], dp[i - 1][j]);
        }
    }

    cout << dp[n][m];
}

/*
 Динамика вперёд (Другой метод реализации перехода)
 Задача про черепашку
 Максимизировать сумму чисел клеток которую черепашка посетила
 Время работы O(n*m)
 Время памяти O(n*m)
 */

void turtle_two_dimensional_max_forward_dynamics() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> cost(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> cost[i][j];
        }
    }

    vector<vector<int>> dp(n, vector<int>(m, INT_MIN));
    dp[0][0] = cost[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i < n - 1) {
                dp[i + 1][j] = max(dp[i + 1][j], cost[i + 1][j] + dp[i][j]);
            }
            if (j < m - 1) {
                dp[i][j + 1] = max(dp[i][j + 1], cost[i][j + 1] + dp[i][j]);
            }
        }
    }

    cout << dp[n-1][m-1];
}

/*
 Рюкзак
 */

int main() {
    recovery_answer();
}