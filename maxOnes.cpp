//Дан массив из нулей и единиц. Нужно определить, какой максимальный по длине подинтервал единиц можно получить, удалив ровно один элемент массива.
//
//[1, 1, 0]
#include <iostream>
#include <vector>

using namespace std;

int maxOnes(const vector<int>& arr) {
    if (arr.empty()) return 0;

    int maxCounter = 0;
    int currentCounter = 0;
    int beforeSecondZeroCounter = 0;
    bool isZero = true;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            currentCounter++;
            if (!isZero) {
                beforeSecondZeroCounter++;
            }
        } else if (arr[i] == 0 && isZero) {
            isZero = false;
        } else if (arr[i] == 0 && !isZero) {
            if (currentCounter > maxCounter) {
                maxCounter = currentCounter;
            }
            currentCounter = beforeSecondZeroCounter;
            isZero = true;
        }
    }

    if (currentCounter > maxCounter) {
        maxCounter = currentCounter;
    }

    if (maxCounter == arr.size()) {
        maxCounter--;
    }

    return maxCounter;
}

int main() {
    int result = maxOnes({1, 0, 1, 0, 1, 1, 1, 1, 1});
    int result2 = maxOnes({1, 1, 1, 1, 1, 1, 1});
    cout << result << '\n';
    cout << result2 << '\n';
}
