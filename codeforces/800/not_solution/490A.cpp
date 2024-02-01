#include <iostream>
#include <vector>

using namespace std;

int min_from_3_elements(int a, int b, int c) {
    int min;
    // 5 2 2
    if (a < b && a < c) {
        min = a;
    } else if (b < a && b < c) {
        min = b;
    } else {
        min = c;
    }
    return min;
}

int main() {
    int counter_1 = 0;
    int counter_2 = 0;
    int counter_3 = 0;
    int n;
    std::cin >> n;
    std::vector<int> a;
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        a.push_back(element);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            counter_1++;
        } else if (a[i] == 2) {
            counter_2++;
        } else if (a[i] == 3) {
            counter_3++;
        }
    }

}