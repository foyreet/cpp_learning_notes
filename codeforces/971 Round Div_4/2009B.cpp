#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string result;
        while (n--) {
            string s;
            cin >> s;
            for (int i = 0; i < s.length(); i++) {
                if (s[i] == '#') {
                    result += " " + to_string(i+1);
                }
            }
        }
        reverse(result.begin(), result.end());
        cout << result << endl;
    }
}
