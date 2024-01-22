#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a;
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        a.push_back(element);
    }

    int winnerIndex = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > a[winnerIndex]) {
            winnerIndex = i;
        }
    }

    int vasTry = -1;

    for (int i = winnerIndex + 1; i < n - 1; i++) {
        if (a[i] % 10 == 5 && a[i] > a[i+1] && a[i] > vasTry) {
            vasTry = a[i];
        }
    }

    std::sort(a.begin(), a.end(), std::greater<>());
    int vasPlace = 0;
    for (int i = 0; i < n; i++) {
        if (vasTry == a[i]) {
            vasPlace = i + 1;
            break;
        }
    }

    cout << vasPlace;
}
