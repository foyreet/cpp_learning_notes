#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void my_solve() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        a.push_back(element);
    }
    // min кол - во монет
    // 2 3 4
    // 4 3 2
    // ув размер массива на 1
    std::sort(a.rbegin(), a.rend());

    // Находим сумму всего массива
    int sum_all_array = 0;
    for (int i = 0; i < n; i++) {
        sum_all_array += a[i];
    }


    int array_size = 1;
    int sum_of_the_current_array = 0;
    for (int i = 0; i < array_size; i++) {
        sum_of_the_current_array += a[i];
        int diff = sum_all_array - sum_of_the_current_array;
        if (sum_of_the_current_array > diff) {
            cout << array_size;
            break;
        }
        array_size++;
    }
}

int main() {
    my_solve();
}