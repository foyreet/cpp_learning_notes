#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void B_1472() {
    int n;
    cin >> n;
    vector<int> quantity_sweets(n);
    for (int i = 0; i < n; i++) cin >> quantity_sweets[i];
    int count_1 = 0;
    int count_2 = 0;
    for (int i = 0; i < n; i++) {
        if (quantity_sweets[i] == 1) {
            count_1++;
        } else {
            count_2++;
        }
    }
    int sum = count_2 * 2 + count_1;
    if (sum % 2 == 0) {
        if (count_1 % 2 == 0 && count_1 >= 2) {
            cout << "YES\n";
        } else if (count_1 == 0 && n % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else {
        cout << "NO\n";
    }
}

void A_702() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> dp(n+1, 1);
    for (int i = 1; i < n; i++) {
        if (a[i-1] < a[i]) {
            dp[i] = dp[i-1] + 1;
        }
    }
    int max_value = INT_MIN;
    for (int i = 0; i < n+1; i++) {
        if (dp[i] > max_value) {
            max_value = dp[i];
        }
    }
    cout << max_value;
}

void A_1538() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int max_index = 0, min_index = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > a[max_index]) {
            max_index = i;
        }

        if (a[i] < a[min_index]) {
            min_index = i;
        }
    }
    int l, r;
    if (min_index < max_index) {
        l = min_index;
        r = max_index;
    } else {
        l = max_index;
        r = min_index;
    }
    vector<int> cases;
    cases.push_back(l + 1 + n - r);
    cases.push_back(r + 1);
    cases.push_back(n - l);
    sort(cases.begin(), cases.end());
    cout << cases[0] << '\n';

}

void A_894() {
    string s;
    cin >> s;

    int all_Q = 0;
    for (char c : s) {
        if (c == 'Q') {
            all_Q++;
        }
    }
    // QQAQQ
    int counter_Q = 0;
    int counter_QAQ = 0;
    for (char c : s) {
        if (c == 'Q') {
            counter_Q++;
        } else if (c == 'A') {
            if (counter_Q > 0 && all_Q - counter_Q > 0) {
                counter_QAQ += counter_Q * (all_Q - counter_Q);
            }
        }
    }

    cout << counter_QAQ << '\n';
}


int main() {
//    int t;
//    cin >> t;
//    while (t--) {
        A_894();
//    }
}