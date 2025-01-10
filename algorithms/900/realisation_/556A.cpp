#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count1 = count(s.begin(), s.end(), '1');
    int count0 = n - count1;
    cout << n - min(count1, count0) * 2 << '\n';
    // 5 01010   c1 = 2  c2 = 3  5 - 2 * 2 = 1
}

int main() {
    solve();
}