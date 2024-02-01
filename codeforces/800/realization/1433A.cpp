#include <iostream>
int solve() {
    const int count_of_clicks_for_full_cycle = 10;
    int sum;
    int sum_for_initial_number = 0;
    int counter = 0;
    int x;
    std::cin >> x;
    int chislo = x % 10;
    // Считаем количество цифр в числе
    while (x != 0) {
        x /= 10;
        counter++;
    }
    for (int i = 1; i <= counter; i++) {
        sum_for_initial_number+=i;
    }
    for (int i = 0; i < chislo; i++) {
        sum = i * count_of_clicks_for_full_cycle + sum_for_initial_number;
    }
    std::cout << sum << '\n';
}
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}