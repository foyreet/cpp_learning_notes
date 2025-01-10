#include <iostream>

using namespace std;

// a >> x  a / (2^x)
int func(int x) {
    int i = 1;
    while (i <= x) {
        i = i << 1;
    }
    return (x - (i >> 1));
}

int main() {
    int x, count = 0;
    cin >> x;

    while (x != 0) {
        x = func(x);
        count++;
    }
    cout << count;
}