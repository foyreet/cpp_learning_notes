#include <iostream>
#include <string>

using namespace std;

void swap(string &s, int i, int j) {
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}

int main() {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    while (t--) {
        for (int i = 0; i < n; i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s, i, (i+1));
                i++;
            }
        }
    }
    std::cout << s;
}