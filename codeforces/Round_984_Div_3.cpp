#include <iostream>
#include <vector>
#include <cmath>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;

void A() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            int el;
            cin >> el;
            a.push_back(el);
        }
        bool isIdeal = true;
        for (int i = 0; i < n - 1; i++) {
            if (abs(a[i] - a[i+1]) != 5 and abs(a[i] - a[i+1]) != 7) {
                isIdeal = false;
                break;
            }
        }
        if (isIdeal) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

void B() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        multimap<int, int> myMap;
        for (int i = 0; i < k; i++) {
            int key, value;
            cin >> key >> value;
            myMap.insert(make_pair(key, value));
        }
        unordered_map<int, int> sumMap;
        for (const auto& pair: myMap) {
            sumMap[pair.first] += pair.second;
        }
        vector<int> Maxvalues;
        for (const auto& pair: sumMap) {
            Maxvalues.push_back(pair.second);
        }

        sort(Maxvalues.begin(), Maxvalues.end(), greater<int>()); // сортировка по убыванию в векторе

        int sum = 0;
        int count = min(n, static_cast<int>(Maxvalues.size()));
        for(int i = 0; i < count; i++) {
            sum += Maxvalues[i];
        }

        cout << sum << endl;

    }
}

void C() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int q;
        cin >> q;
        vector<bool> results(q);
        for (int j = 0; j < q; j++) {
            int i;
            char v;
            cin >> i >> v;
            s[i-1] = v;
            results[j] = (s.find("1100") != string::npos);
        }

        for (bool result : results) {
            cout << (result ? "YES" : "NO") << endl;
        }
    }
}
int main() {
    C();
}
