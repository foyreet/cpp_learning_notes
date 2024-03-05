#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void A() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int counter = 0;
    // .@@*@.**@@
    for (size_t i = 0; i < s.length(); ++i) {
        if (i != 0 && s[i] == '*' && s[i - 1] == '*') {
            break;
        } else if (s[i] == '@') {
            counter++;
        }
    }
    cout << counter << '\n';
}

void B_razbor() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int answ = a[0];
    for (int i = 1; i < n; i++) {
        answ++;
        // Целочисленное деление с округлением вверх
        answ = (answ + a[i] - 1) / a[i] * a[i];
    }
    cout << answ << '\n';

    /*
    Находим ближайшее число которое делится нацело

    6
    3 2 4 5 9 18
    1)
    3++  4
    (4 + 2 - 1) / 2 * 2 = 4
    2)
    4++ 5
    (5 + 4 - 1) / 4 * 4 = 8
    3)
    8++ 9
    (9 + 5 - 1) / 5 * 5 = 10
    4)
    10++ 11
    (11 + 9 - 1) / 9 * 9 = 18
    5)
    18++ 19
    (19 + 18 - 1) / 18 * 18 = 36
     */

}

/* ((a % m) * (b % m)) % m
 это тоже самое что и (a * b) % m
*/
void C() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    string s;
    cin >> s;

    int l = 0;
    int r = n - 1;
    vector<long long> result;

    for (char c : s) {
        long long multiply = 1;
        for (int j = l; j <= r; j++) {
            multiply *= (a[j] % m);
            multiply %= m;
        }
        result.push_back(multiply);

        c == 'L' ? l++ : r--;
    }

    for (long long i : result) {
        cout << i << ' ';
    }
    cout << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        B_razbor();
    }
}