#include <string>
#include <iostream>
#include <vector>
using namespace std;
void A() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        char m = a[0];
        char k = b[0];
        a.erase(0, 1); // удаление 1 - ого символа в строке
        b.erase(0, 1); // удаление 1 - ого символа в строке
        string result_a = k + a;
        string result_b = m + b;
        cout << result_a << " " << result_b << endl;
    }
}

void B() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 3) {
            cout << 3 << endl;
        } else {
            cout << 2 << endl;
        }
    }
}
/// не проходило по памяти поэтому переписал
//long long SumPrefix(const vector<int>& prefix) {
//    long long sum = 0;
//    for (const auto& elem : prefix) {
//        sum += elem;
//    }
//    return sum;
//}
//
//long long Max_element_prefix(const vector<int>& prefix) {
//    long long max_el = prefix[0];
//    for (const auto& elem : prefix) {
//        if (elem > max_el) {
//            max_el = elem;
//        }
//    }
//    return max_el;
//}

void C() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        int count = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long sum = 0;
        long long max_el = a[0];
        // create prefix
        for (int i = 1; i <= n; i++) {
            sum += a[i-1];
            if (a[i-1] > max_el) {
                max_el = a[i-1];
            }
            if (sum == 0 and max_el == 0) {
                count++;
            }
            else if (max_el != 0 and sum % max_el == 0 and sum / max_el == 2) {
                count++;
            }
        }
        cout << count << endl;
    }
}
int main() {
    C();
}
