#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

void A() {
    int n;
    cin >> n;
    string s;

    cout << s;
}

void B() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int sum = 0;
    for (int el : a) {
        sum += el;
    }
    int number_equal = sum / n;
    int stash = 0;

    bool flag = true;
    for (int el : a) {
        if (el >= number_equal) {
            stash += (el - number_equal);
        } else {
            stash -= (number_equal - el);
        }

        if (stash < 0) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

void C() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int el;
        cin >> el;
        a.push_back(el);
    }
    int count = 0;
    int l = 0;
    for (int r = 0; r < n; r++) {
        while (a[r] != a[l]) {
            l = r;
            count++;
        }
    }
    cout << count;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        A();
    }
}


