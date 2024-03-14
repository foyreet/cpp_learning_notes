#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <climits>

using namespace std;

void A() {
    int k;
    cin >> k;
    vector<pair<int, int>> points;
    for (int i = 0; i < k; i++) {
        pair<int, int> p;
        cin >> p.first >> p.second;
        points.push_back(p);
    }
    int min_x = INT_MAX;
    int min_y = INT_MAX;
    int max_x = INT_MIN;
    int max_y = INT_MIN;

    for (int i = 0; i < k; i++) {
        if (points[i].first < min_x) {
            min_x = points[i].first;
        }
        if (points[i].first > max_x) {
            max_x = points[i].first;
        }
        if (points[i].second < min_y) {
            min_y = points[i].second;
        }
        if (points[i].second > max_y) {
            max_y = points[i].second;
        }
    }
    cout << min_x << ' ' << min_y << ' ' << max_x << ' ' << max_y;
}

void B() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &it: a) cin >> it;

    int maxIncome = 0;
    for (int i = 0; i < a.size() - 1; i++) {
        for (int j = i + 1; j <= i + k && j < a.size(); j++) {
            if (a[j] - a[i] > maxIncome) {
                maxIncome = a[j] - a[i];
            }
        }
    }

    cout << maxIncome;
}


void C() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it: a) cin >> it;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    int max_el = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max_el) {
            max_el = a[i];
        }
    }

    int dif = max_el - (sum - max_el);
    if (dif <= 0) {
        cout << sum;
    } else {
        cout << dif;
    }
}

void D() {

}

int main() {
    B();
}