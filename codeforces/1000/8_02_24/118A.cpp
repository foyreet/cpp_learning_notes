#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;
    // a e i o u y
    // напишем функцию которая определяет гласную и согласную
    // перед каждой согласной ставим '.'

    string result;
    for (char c : s) {
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        }

        if (c != 'a' && c != 'e' && c != 'y' && c != 'u' && c != 'i' && c != 'o') {
            result += '.';
            result += c;
        }
    }
    cout << result;
}

int main() {
    solve();
}