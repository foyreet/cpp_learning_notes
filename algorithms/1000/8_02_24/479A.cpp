#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int v1 = a + b + c;
    int v2 = (a + b) * c;
    int v3 = a * (b + c);
    int v4 = a * b * c;
    int v5 = a + b * c;
    int v6 = a * b + c;
    vector<int> v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    v.push_back(v5);
    v.push_back(v6);
    int max = INT_MIN;
    for (int n : v) {
        if (n > max) {
            max = n;
        }
    }
    cout << max;
}

int main() {
    solve();
}
