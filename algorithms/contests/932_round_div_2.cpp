#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using ll = long long;
using namespace std;

void A() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    const string k = s;
    reverse(s.begin(), s.end());
    string str = s + k;
    if (k > str) {
        cout << str << '\n';
    } else {
        cout << k << '\n';
    }
}

int mex(const vector<int>& a, int n) {
    vector<int> k;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        if (a[i] <= n) {
            k.push_back(a[i]);
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        while (k[i] != 0) {
            p[cnt] = i;
            cnt++;
            k[i]--;
        }
    }

}
/*

 */
void B() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& it : a) cin >> it;
    cout << mex(a, n);

}
int main() {
    int t;
    cin >> t;
    while(t--) {
        B();
    }
}