#include <iostream>
#include <vector>

using namespace std;

int main() {
    std::vector<int> a;
    while (true) {
        int number;
        cin >> number;
        if (number == -2*1e9) {
            break;
        }
        a.push_back(number);
    }

    bool constant = true;
    bool ascending = true;
    bool weakly_ascending = true;
    bool descending = true;
    bool weakly_descending = true;

    for (int i = 0; i < a.size() - 1; i++) {
        if (a[i] == a[i+1]) {
            ascending = false;
            descending = false;
        } else if (a[i] < a[i+1]) {
            constant = false;
            descending = false;
            weakly_descending = false;
        } else if (a[i] > a[i+1]) {
            constant = false;
            ascending = false;
            weakly_ascending = false;
        }
    }

    if (constant) {
        cout << "CONSTANT";
    } else if (ascending) {
        cout << "ASCENDING";
    } else if (weakly_ascending) {
        cout << "WEAKLY ASCENDING";
    } else if (descending) {
        cout << "DESCENDING";
    } else if (weakly_descending) {
        cout << "WEAKLY DESCENDING";
    } else {
        cout << "RANDOM";
    }
}
