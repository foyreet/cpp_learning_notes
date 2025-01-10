#include <iostream>
int solve() {
    const int count_hour = 23;
    const int count_minute = 60;
    int h, m;
    std::cin >> h >> m;
    int number_of_minutes_until_new_year = (count_hour - h) * 60 + (count_minute - m);
    std::cout << number_of_minutes_until_new_year << '\n';
}
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}