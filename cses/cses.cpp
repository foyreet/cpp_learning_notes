#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
using ll = long long;

void Weird_Algorithm() {
    ll n;
    cin >> n;
    cout << n << ' ';
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
            cout << n << ' ';
        } else {
            n = n * 3 + 1;
            cout << n << ' ';
        }
    }
}

void Missing_Number() {
    ll n;
    cin >> n;
    vector<int> sum(n - 1);
    for (auto &it: sum) cin >> it;
    ll sum_numbers = 0;
    for (int i = 0; i < n - 1; i++) {
        sum_numbers += sum[i];
    }
    ll dif = (n + 1) * n / 2 - sum_numbers;
    cout << dif;
}

void Repetitions() {
    string str;
    cin >> str;
    int curr = 1;
    size_t n = str.length();
    int best = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] != str[i + 1]) {
            best = max(best, curr);
            curr = 0;
        }
        curr++;
    }
    best = max(best, curr);
    cout << best;
}

void Increasing_Array() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it: a) cin >> it;
    ll sum = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            sum += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }
    cout << sum;
}

void Permutations() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i += 2) {
        cout << i << ' ';
    }
    for (int i = 1; i <= n; i += 2) {
        cout << i << ' ';
    }
}

void Number_Spiral() {

}

int main() {
    Number_Spiral();
}