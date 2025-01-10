#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void MishaSolution();
void mysolution();

int main() {
    MishaSolution();
}

void mysolution() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a;
        reverse(a.begin(), a.end());
        replace(a.begin(), a.end(), 'p', '*');
        replace(a.begin(), a.end(), 'q', 'p');
        replace(a.begin(), a.end(), '*', 'q');
        cout << a << endl;
    }
}

char change_symbol(char c) {
    switch (c) {
        case 'q': return 'p';
        case 'p': return 'q';
        default: return c;
    }
}

void MishaSolution() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        reverse(a.begin(), a.end());
        for (char& c : a) {
            if (c == 'q') {
                c = 'p';
            } else if (c == 'p') {
                c = 'q';
            }
        }
        cout << a << endl;
    }
}

