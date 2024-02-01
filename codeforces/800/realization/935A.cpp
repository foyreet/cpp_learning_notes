#include <iostream>
using namespace std;
int number_of_divisors(int n) {
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}
void my_solve() {
    int n;
    cin >> n;
    cout << number_of_divisors(n);
}
int main() {
    my_solve();
}
