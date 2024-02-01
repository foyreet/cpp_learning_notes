#include <iostream>
#include <vector>

using namespace std;

int solve() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        a.push_back(element);
    }
    //2 2 1 3 4 1
    //
    int max_length = 1;
    int counter = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i-1]) {
            counter++;
            max_length = max(max_length, counter);
        } else {
            max_length = max(max_length, counter);
            counter = 1;
        }
    }
    cout << max_length;
}

int main() {
    solve();
}