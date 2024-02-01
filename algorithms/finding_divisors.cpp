#include <iostream>
#include <vector>

using namespace std;

void finding_divisors(int n) {
    vector<int> v;
    for (int i = 1; i * i <= n; i++) {
        v.push_back(i);
        v.push_back(n / i);
    }
}
