#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using ll = long long;

using namespace std;

void A() {
    int n, k;
    cin >> n >> k;
    int x = (n/k + 1) * k;
    cout << x;
}

void B() {
     int64_t n, k;
     cin >> n >> k;
     int64_t countDiploms= n / 2 / (k + 1);
     int64_t countGramota = countDiploms * k;
     int64_t countNothing = n - countDiploms - countGramota;
     cout << countDiploms << " " << countGramota << " " << countNothing;
}

void C() {
    // 1'000'000
    ll n; cin >> n;
    // log2(1'000'000) = 17
    // 2^0 + 2^1 + ... + 2^n-1 = 2^n - 1
    ll sum_all = n * (n + 1) / 2;
    ll maxPowerOfTwo = log2(n);
    ll sum_two = ((1 << (maxPowerOfTwo + 1)) - 1);
    sum_all -= 2 * sum_two;

    cout << sum_all << '\n';
}
// 1 2 3 4
//

void D_1solve() {
    ll n;
    cin >> n;
    int k = 1;
    while (k < n) {
        n -= k;
        k++;
    }
    cout << n << '\n';
}

void D_2_solve() {
    ll n;
    cin >> n;
    ll low = 0, high = ll(1e9);
    while (high - low > 1) {
        ll k = (high + low) / 2;
        if (k * (k + 1) / 2 >= n) high = k;
        else low = k;
    }
    ll k = low;
    cout << n - (k*(k+1)) / 2 << '\n';
}

ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

void E() {
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll count_red_and_blue = n / (a*b / gcd(a, b));
    ll count_red = n / a - count_red_and_blue;
    ll count_blue = n / b - count_red_and_blue;
    ll result = count_red * p + count_blue * q + count_red_and_blue * max(p, q);
    cout << result;
 }

int main() {
    E();
}
