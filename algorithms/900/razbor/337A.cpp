#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void my_solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a;
    for (int i = 0; i < m; i++) {
        int element;
        cin >> element;
        a.push_back(element);
    }

    // 2 5
    // 3 6 8 9 5
    sort(a.begin(), a.end());
    // 3 5 6 8 9
    int leastvalue = a[n-1] - a[0]; //наименьше значение 5 - 3 = 2
    for (int i = 1 ; i <= m - n; i++) {
        if (a[i + n - 1] - a[i] < leastvalue) {
            leastvalue = a[i + n - 1] - a[i];
        }
    }
    /*
     i [1...3]
     3 5 6 8 9
     i = 1: a[2] - a[1] = 1 < 2
     i = 2: a[3] - a[2] = 2
     i = 3: a[4] - a[3] = 1
    */
     cout << leastvalue;
}

int main() {
    my_solve();
}