#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <utility>
#include <algorithm>
#include <queue>

using namespace std;

void B_32_1_solve() {
    string s;
    cin >> s;
    int currBlockLen = 0;
    for (char c: s) {
        if (c == '.') {
            cout << currBlockLen;
            currBlockLen = 0;
        } else {
            currBlockLen++;
        }

        if (currBlockLen == 2) {
            cout << currBlockLen;
            currBlockLen = 0;
        }
    }
}

void B_32_2() {
    string s;
    cin >> s;
    int currBlockLen = 0;
    string currentSequence;
    for (char c: s) {
        currentSequence += c;
        if (currentSequence == ".") {
            cout << 0;
            currentSequence = "";
        } else if (currentSequence == "-.") {
            cout << 1;
            currentSequence = "";
        } else if (currentSequence == "--") {
            cout << 2;
            currentSequence = "";
        }
    }
}

void B_32_3() {
    string s;
    cin >> s;
    unordered_map<string, int> m;
    m["."] = 0;
    m["-."] = 1;
    m["--"] = 2;

    string currentSequence;
    for (char c: s) {
        currentSequence += c;
        if (m.find(currentSequence) != m.end()) {
            cout << m[currentSequence];
            currentSequence = "";
        }
    }
}


void A_275() {
    const int n = 3;
    vector<vector<int>> lamps(n, vector<int>(n, 1));
    vector<vector<int>> changes(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> changes[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (changes[i][j] % 2 == 1) {
                lamps[i][j] = (lamps[i][j] + 1) % 2;

                if (i - 1 >= 0) {
                    lamps[i - 1][j] = (lamps[i - 1][j] + 1) % 2;
                }
                if (i + 1 <= n - 1) {
                    lamps[i + 1][j] = (lamps[i + 1][j] + 1) % 2;
                }
                if (j - 1 >= 0) {
                    lamps[i][j - 1] = (lamps[i][j - 1] + 1) % 2;
                }
                if (j + 1 <= n - 1) {
                    lamps[i][j + 1] = (lamps[i][j + 1] + 1) % 2;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << lamps[i][j];
        }
        cout << '\n';
    }
}

void A_248() {
    int n;
    cin >> n;
    pair<int, int> p[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
    }
    int count_0_first = 0;
    int count_0_second = 0;
    int count_1_first = 0;
    int count_1_second = 0;
    for (int i = 0; i < n; i++) {
        if (p[i].first == 0) {
            count_0_first++;
        } else {
            count_1_first++;
        }

        if (p[i].second == 0) {
            count_0_second++;
        } else {
            count_1_second++;
        }
    }

    int result = min(count_0_first, count_1_first) + min(count_0_second, count_1_second);
    cout << result;
}


void A_116() {
    int n;
    cin >> n;
    pair<int, int> p[n];
    int sum = 0;
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
    }

    for (int i = 0; i < n; i++) {
        sum += p[i].second - p[i].first;
        if (sum > max) {
            max = sum;
        }
    }
    cout << max;
}

void A_141() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    bool flag = true;
    string s_1_2 = s1 + s2;
    for (int i = 0; i < s_1_2.size(); i++) {
        for (int j = 0; j < s3.size(); j++) {
            if (s_1_2[i] == s3[j]) {
                cout << "YES";
                return;
            }

        }
    }

}


void B_227() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int m;
    cin >> m;
    vector<int> requests(m);
    for (int i = 0; i < m; i++) cin >> requests[i];

    unordered_map<int, int> from_start;
    for (int i = 0; i < n; i++) {
        from_start[a[i]] = i + 1;
    }

    long long sum_vasya = 0;
    long long sum_petya = 0;
    for (int i = 0; i < m; i++) {
        sum_vasya += from_start[requests[i]];
        sum_petya += n - from_start[requests[i]] + 1;
    }

    cout << sum_vasya << " " << sum_petya;
}

void A_450() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (auto &it: a) cin >> it;
    int max_child = (a[0] + m - 1) / m;
    int max_child_index = 0;
    for (int i = 1; i < n; i++) {
        int current_child = (a[i] + m - 1) / m;
        if (current_child >= max_child) {
            max_child = current_child;
            max_child_index = i;
        }
    }
    cout << max_child_index + 1;
}

void A_165() {
    int n;
    cin >> n;
    int x, y;
    cin >> x >> y;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        A_165();
    }
}

