#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void A() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        unordered_map<int, int> countMap;
        int count = 0;
        for (int i = 0; i < n; i++) {
            int el;
            cin >> el;
            a.push_back(el);
            countMap[a[i]]++;
        }
        for (const auto& pair : countMap) {
            int k = pair.second;
            count += k / 2;
        }
        cout << count << endl;
    }
}

void B() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<int> a;
        unordered_map<int, int> countMap;
        for (int i = 0; i < k; i++) {
            int el;
            cin >> el;
            a.push_back(el);
            countMap[a[i]]++;
        }
        bool isFound = false;
        for (int i = 0; i < k; i++) {
            if ((k - 2) % a[i] == 0) {
                int target = (k-2) / a[i];
                if (target != a[i] && countMap.find(target) != countMap.end()) {
                    cout << a[i] << " " << target << endl;
                    isFound = true;
                    break;
                } else if (target == a[i] && countMap[target] > 1) {
                    cout << a[i] << " " << target << endl;
                    isFound = true;
                    break;
                }
            }
        }
    }
}

void C() {
    int t;
    cin >> t;
    while (t--) {

    }
}
int main() {
    B();
}