#include <iostream>
int main() {
    int tasks_solved = 0;
    int n, k;
    std::cin >> n >> k;
    int time_to_solve = 240 - k;
    for (int i = 1; i <= n; i++) {
        if (5*i <= time_to_solve) {
            tasks_solved++;
            time_to_solve -= 5 * i;
        } else {
            break;
        }
    }
    std::cout << tasks_solved;
}
