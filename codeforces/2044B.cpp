#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a;
        reverse(a.begin(), a.end());
        replace(a.begin(), a.end(), 'p', '*');
        replace(a.begin(), a.end(), 'q', 'p');
        replace(a.begin(), a.end(), '*', 'q');
        cout << a << endl;
    }
}
