#include <iostream>
#include <unordered_set>
#include <map>
#include <string>
using namespace std;

void A() {
    int n, value;
    cin >> n;
    unordered_set<int> teacher;
    for (int i = 0; i < n; i++) {
        cin >> value;
        teacher.insert(value);
    }

    int m, x, count = 0;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> x;
        count += teacher.count(x);
    }
    cout << count;

}

void G() {
    int n;
    string akk;
    cin >> n;
    map<string, int> mp;
    while(n--) {
        cin >> akk;
        mp[akk] += 1;
    }

    for (auto &el : mp) {
        if (el.second > 1) {
            cout << el.first << '\n';
        }
    }
}
int main() {
    G();
}
