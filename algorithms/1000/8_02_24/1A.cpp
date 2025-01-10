#include <iostream>

using namespace std;

void solve() {
    int n, m, a;
    cin >> n >> m >> a;
    long long number_of_slabs_on_side_n;
    long long number_of_slabs_on_side_m;
    if (n % a != 0) {
        number_of_slabs_on_side_n = n / a + 1;
    } else {
        number_of_slabs_on_side_n = n / a;
    }

    if (m % a != 0) {
        number_of_slabs_on_side_m = m / a + 1;
    } else {
        number_of_slabs_on_side_m = m / a;
    }

    long long result;
    result = number_of_slabs_on_side_n * number_of_slabs_on_side_m;
    cout << result;
}

int main() {
    solve();
}