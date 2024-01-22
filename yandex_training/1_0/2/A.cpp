#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a;

    for (int i = 0; i < 3; i++) {
        int element;
        cin >> element;
        a.push_back(element);
    }

    bool flag = true;
    for (int i = 1; i < a.size(); i++) {
        if (a[i] <= a[i - 1]) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}