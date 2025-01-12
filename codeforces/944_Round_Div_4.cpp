#include <iostream>
#include <string>
using namespace std;

void A() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        int maxim, minim;
        cin >> x >> y;
        if (x >= y) {
            maxim = x;
            minim = y;
        }
        else if (y >= x) {
            maxim = y;
            minim = x;
        }
        cout << minim << " " << maxim << endl;
    }
}


void swapChars(string &str, size_t index_1, size_t index_2) {
    char temp = str[index_1];
    str[index_1] = str[index_2];
    str[index_2] = temp;
}
void B() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool flag = true;
        for (int i = 0; i < s.length(); i++) {
            if (s[s.length() - 1] != s[s.length() - 1- i]) {
                flag = false;
                swapChars(s, s.length() - 1, s.length() - 1- i);
            }
        }
        if (flag) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << s << endl;
        }
    }
}
// I don't solve C
void C() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        bool flag = false;
        if (d > c and b > c and (a + b != c + d)) {
            flag = true;
        }
        else if (d < c and b > d and (a + b != c + d)) {
            flag = true;
        } else if ((a > c and b > d) or ()) {
            flag = false;
        }
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
int main() {
    C();
}