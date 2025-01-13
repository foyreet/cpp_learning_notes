#include <iostream>
using namespace std;
//Check Number prime or not?
bool isPrimeNumber (int a, int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (a % i == 0) {
            count++;
        }
    }
    return count == 2;
}

int main() {
    int a, n;
    cin >> a >> n;

    if (a == 1) {
        cout << "not Prime number and not Complex number" << endl;
    } else {
        if (isPrimeNumber(a, n)) {
            cout << "Prime Number" << endl;
        }
        else {
            cout << "Complex number" << endl;
         }
    }

}