#include <iostream>
#include <string>
#include <vector>
using namespace std;

void A() {
    int t;
    cin >> t;
    while (t--) {
        int count_words = 0;
        size_t sum_length = 0;
        int n, m;
        cin >> n >> m;
        while (n--) {
            string s;
            cin >> s;
            sum_length += s.length();
            if (sum_length <= m) {
                count_words++;
            }
        }
        cout << count_words << endl;
    }
}

void B() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        bool IsNotTheSame = true;
        for (int i = 0; i < n; i++) {
            int elem;
            cin >> elem;
            a.push_back(elem);
        }
        // Будем сравнивать с 1 - ым элементом все элементы вектора
        int first_el = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] == first_el) {
                IsNotTheSame = false;
                break;
            }
        }
        if (IsNotTheSame) {
            cout << "Yes" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

void C() {

}
int main() {
    C();
}