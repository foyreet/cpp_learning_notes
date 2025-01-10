#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        a.push_back(element);
    }
    int x;
    cin >> x;
    int near = a[0];
    for (int i = 0; i < n; i++) {
        if (abs(x - a[i]) < abs(x - near)) {
            near = a[i];
        }
    }

    cout << near;
}
