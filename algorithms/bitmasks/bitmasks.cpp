#include <iostream>
#include <string>
#include <vector>

using namespace std;
// Используем св - во xor a ^ a == 0 (самообратимость)
void my_solve_A_1915_800() {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a ^ b) == 0) cout << c << '\n';
    else if ((a^c) == 0) cout << b << '\n';
    else if ((b^c) == 0) cout << a << '\n';
}

/* Тут используется свойство реверсивности xor
 a ^ b ^ b = a
 b ^ a ^ b = a  так как тут используется свойство коммутативности a ^ b = b ^ a
 a ^ 0 = a
*/
void author_solve_A_1915_800() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a ^ b ^ c) << '\n';
}

void my_solve_1915B_800() {
    string s = "ABC";
    string str;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    char result = 0;
    str = s1 + s2 + s3;
    for (char c : str) {
        result ^= c;
    }
    for (char c : s) {
        result ^= c;
    }
    if (result != 0) {
        result ^= '?';
    }
    cout << result << '\n';
}


int main() {

}