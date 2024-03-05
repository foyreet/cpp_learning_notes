#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void A() {
    int n;
    cin >> n;
    int a, b, f_1, f_0;
    cin >> a >> b >> f_1 >> f_0;

    vector<int> dp(n+1, 0);

    dp[0] = f_0;
    dp[1] = f_1;

    for (int i = 2; i < n+1; i++) {
        dp[i] = a*dp[i-1] + b*dp[i-2];
    }

    cout << dp[n];
}


vector<int> searchPath(const vector<int>& path, int end) {
    vector<int> searchedPath;
    int current = end;
    while (current != 0) {
        searchedPath.push_back(current);
        current = path[current];
    }
    reverse(searchedPath.begin(), searchedPath.end());

    return searchedPath;
}

void B() {
    int n;
    cin >> n;
    vector<int> cost(n + 1);
    for (int i = 1; i <= n; i++) cin >> cost[i];

    vector<int> dp(n + 1, 0);
    vector<int> path(n + 1);
    dp[1] = cost[1];
    path[1] = 0;

    for (int i = 2; i <= n; i++) {
        if (dp[i - 1] > dp[i - 2]) {
            dp[i] = dp[i - 1] + cost[i];
            path[i] = i - 1;
        } else {
            dp[i] = dp[i - 2] + cost[i];
            path[i] = i - 2;
        }
    }

    cout << dp[n] << '\n';

    for (int step : searchPath(path, n)) {
        cout << step << ' ';
    }
}

void C() {
    int n;
    cin >> n;
    vector<long long> dp(n+1, 0);
    dp[0] = 3;
    for (long long i = 1; i < n+1; i++) {
        dp[i] = dp[i-1] * 2;
    }
    cout << dp[n-1];
}

void D() {
    // x+1  x*2  x*3
    // 1 2 4 5
    int n;
    cin >> n;
    int count_operations = 0;
    while (n != 1) {
        if (n % 3 == 0) {
            n /= 3;
        } else if (n % 2 == 0) {
            n /= 2;
        } else {
            n -= 1;
        }
        count_operations++;
    }
    cout << count_operations;

}
int main() {
    D();
}
