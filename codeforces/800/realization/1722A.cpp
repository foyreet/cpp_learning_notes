#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void solve(const string& word) {
    unordered_map<char, int> charCount;
    for (char c : word) {
        charCount[c]++;
    }
    
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n != 5) {
        std::cout << "NO\n";
        return;
    }

    bool flag = true;
    for (char c : s) {
        if (charCount.find(c) != charCount.end()) {
            if (charCount[c] != 0) {
                charCount[c]--;
            } else {
                flag = false;
                break;
            }
        } else {
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

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve("Timur");
    }
}