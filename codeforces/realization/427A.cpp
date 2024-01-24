#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    int police = 0;
    int murders = 0;

    int event;
    for (int i = 0; i < n; i++) {
        cin >> event;
        if (event == -1) {
            if (police > 0) {
                police--;
            } else {
                murders++;
            }
        } else {
            police += event;
        }
    }

    cout << murders;
}
