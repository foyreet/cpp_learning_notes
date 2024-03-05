#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

void A_my_solve() {
    string a, b;
    cin >> a >> b;
    int p_a = 0;
    int p_b = 0;
    for (char c: a) {
        if (c == '0') {
            p_a++;
        } else {
            break;
        }
    }

    for (char c: b) {
        if (c == '0') {
            p_b++;
        } else {
            break;
        }
    }

    size_t size_a = a.size() - p_a;
    size_t size_b = b.size() - p_b;

    int who = 0;
    if (size_a > size_b) {
        who = 1;
    } else if (size_b > size_a) {
        who = 2;
    } else {
        while (p_a < a.size()) {
            if (a[p_a] > b[p_b]) {
                who = 1;
                break;
            } else if (a[p_a] < b[p_b]) {
                who = 2;
                break;
            }
            p_a++;
            p_b++;
        }
    }

    if (who == 0) {
        cout << "=";
    } else if (who == 1) {
        cout << ">";
    } else {
        cout << "<";
    }
}


void print_compare_result(string &s1, string &s2, int compare_result) {
    if (compare_result < 0) {
        cout << "<";
    } else if (compare_result > 0) {
        cout << ">";
    } else {
        cout << "=";
    }
}

void A_razbor() {
    string a, b;
    cin >> a >> b;
    // 12 2
    auto maxSize = max(a.size(), b.size());

    a.insert(0, string(maxSize - a.size(), '0'));
    b.insert(0, string(maxSize - b.size(), '0'));
    // 00045
    // 00043
    int compare_result = a.compare(b); // a<=>b работает как compare
    print_compare_result(a, b, compare_result);
}

void B() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &el: a) cin >> el;
    auto ZerosCount = count(a.begin(), a.end(), 0); // подсчёт 0 в векторе
    if (n == 1 && ZerosCount == 0) {
        cout << "YES";
    } else if (n == 1 && ZerosCount == 1) {
        cout << "NO";
    } else {
        if (ZerosCount == 1) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }
}

int multiply(int x, int y) {
    return x * y;
}

void accumulate_test() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& el : a) cin >> el;
    int sum = accumulate(a.begin(), a.end(), 1, multiply);
    cout << sum;
}

void D() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& el : a) cin >> el;
    sort(a.begin(), a.end());

    int distance;
    int min_distance = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
        distance = abs(a[i] - a[i+1]);
        min_distance = min(distance, min_distance);
    }
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        distance = abs(a[i] - a[i + 1]);
        if (min_distance == distance) {
            count++;
        }
    }
    cout << min_distance << " " << count;
}

void D_explanation() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto& it : a) cin >> it;
    sort(a.begin(), a.end());
    int min = a[1] - a[0];
    int cnt = 1;
    for (int i = 2; i < n; i++) {
        int dif = abs(a[i] - a[i - 1]);
        if (dif < min) {
            min = dif;
            cnt = 1;
        } else if (dif == min) {
            cnt++;
        }
    }

    cout << min << " " << cnt;
}

void E() {

}
int main() {
    E();
}
