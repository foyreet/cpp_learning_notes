#include <iostream>
#include <vector>

using namespace std;
// a[i] > 0
int findmax(vector<int> &a) {
    int max1 = a[0];
    int max2 = a[0];
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i > max2]) {
            max2 = a[i];
        }
    }
    return max1, max2;
}
// a[i] < 0
int findmin(vector<int> &a) {
    int min1 = a[0];
    int min2 = a[0];
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < min1) {
            min2 = min1;
            min1 = a[i];
        } else if (a[i] < min2) {
            min2 = a[i];
        }
    }
    return min1, min2;
}

void solve() {
    vector<int> a;
    for (int i )
}
