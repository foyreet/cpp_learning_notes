#include <iostream>
#include <unordered_set>

using namespace std;

void solve() {
    unordered_set<int> a;
    int element;
    // 1 2 3 2 1
    while(cin.peek() != '\n' && cin >> element) {
        // O(1)
        a.insert(element);
    }
    // a = [1, 2, 3]
    cout << a.size();
}

int main() {
    solve();
}
