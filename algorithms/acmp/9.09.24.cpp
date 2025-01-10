#include <iostream>
#include <map>
using namespace std;
int acmp15() {
    int n;
    cin >> n;
    int b = 0;
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b;
            if(b==1){
                if (i != j) {
                    sum1 += 1;
                } else {
                    sum2 += 1;
                }
            }
        }
    }
        cout << sum1 / 2 + sum2;
}

int acmp124() {
    int n, m;
    cin >> n >> m;
    while (m--) {
        int i, j;
        cin >> i >> j;


    }
}
int main() {

}