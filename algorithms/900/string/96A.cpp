#include <iostream>
#include <string>
// 0 1 - ая команда
// 1 2 - ая команда

using namespace std;

void my_solve() {
    string s;
    cin >> s;
    string dangerous_1 = "1111111";
    string dangerous_0 = "0000000";
    if ((s.find(dangerous_1) != string::npos) || (s.find(dangerous_0) != string::npos)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    my_solve();
}