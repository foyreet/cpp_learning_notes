//
// Created by Mikhail Erdyakov on 23.01.2024.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
        a.push_back(number);
    }

    // "чья очередь"
    bool whos_turn = true; // true - Сергей, false - Дима

    int sergeyPoints = 0;
    int dimaPoints = 0;

    // 5 1
    int l = 0;
    int r = n - 1;
    while (l <= r) {
        int max = a[l] > a[r] ? a[l++] : a[r--];
        if (whos_turn) {
            sergeyPoints += max;
        } else {
            dimaPoints += max;
        }
        whos_turn = !whos_turn;
    }

    cout << sergeyPoints << " " << dimaPoints;
}
