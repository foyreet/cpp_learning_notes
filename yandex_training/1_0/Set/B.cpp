#include <iostream>
#include <set>
#include <vector>
using namespace std;

void solve() {
    vector<int> a;
    int element;
    while (cin.peek() != '\n' && cin >> element) {
        a.push_back(element);
    }
    vector<int> b;
    int element2;
    cin >> element2;
    while (cin.peek() != '\n') {
        b.push_back(element2);
        cin >> element2;
    }
    // 1 3 2
    // 4 3 2
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            if (a[i] == b[j]) {
                cout << b[j] << ' ';
            }
        }
    }
}

int main() {
    solve();
}