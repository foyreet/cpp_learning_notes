#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;
// Разобраться со строками
void A() {
    string s;
    cin >> s;
    string countZero;
    vector<string> result;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '0') {
            for (int j = 0; j < i; j++) {
                countZero += '0';
            }
            char c = s[i];
            string toInsert = string(1, c) + countZero;
            result.push_back(toInsert);
        }
    }

    for (string c : result) {
        cout << c << " ";
    }
}

void B() {
    int n, k;
    cin >> n >> k;

}

int main() {
    B();
}