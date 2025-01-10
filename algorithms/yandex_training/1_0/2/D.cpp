#include <iostream>
#include <vector>

using namespace std;

int main() {
    int counter = 0;
    vector<int> a;
    int element;
    while (cin.peek() != '\n' && cin >> element) {
        a.push_back(element);
    }

    for (int i = 1; i < a.size() - 1; i++) {
        if (a[i] > a[i-1] && a[i] > a[i+1]) {
            counter++;
        }
    }
    std::cout << counter;
}