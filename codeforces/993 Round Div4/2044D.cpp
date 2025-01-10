#include<iostream>
#include <vector>
#include <queue>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        // массив, индексы в котором отвечают за то встретилось в `a` такое число или нет
        vector<bool> numbers_availability(n + 1);
        vector<int> result(n);

        // вводим числа изначального массива, заполняем их доступность и если они встретились в первый раз
        // то проставляем сразу в ответ их
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (!numbers_availability[x]) {
                result[i] = x;
                numbers_availability[x] = true;
            }
        }

        // в очередь запишем все числа, которые ни разу не встретились
        queue<int> unused_numbers;
        for (int i = 1; i <= n; i++) {
            if (!numbers_availability[i]) {
                unused_numbers.push(i);
            }
        }

        // пробегаемся по массиву который составляем и если там пустая клетка, то вставляем туда неиспользованное число
        for (int i = 0; i < n; i++) {
            if (result[i] == 0) {
                result[i] = unused_numbers.front();
                unused_numbers.pop();
            }
        }

        for (int i = 0; i < n; i++) {
            cout << result[i] << " \n";
        }
    }
}