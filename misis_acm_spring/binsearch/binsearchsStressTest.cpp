#include <iostream>
#include <vector>
#include <random>

using namespace std;

/*
 Бинарный поиск
git bisect - бин поиск в git
Сложность O(log n)

lower_bound ищет первый элемент такой что a[i] >= x
upper_bound ищет первый элемент такой что a[i] > x

Бинпоиск по ответу
Find min time, cost and staff
Роман в томах
лимит на ширину книжки

 */

//void lower_bound() {
//    int l, r;
//    while (r - l > 1) {
//        int m = (l + r) / 2;
//        if (//a[m] >= x) {
//            r = m;
//        } else {
//            l = m;
//        }
//    }
//}

// Бинпоиск
int binsearch(vector<int> &a, int value) {
    int l = 0, r = a.size() - 1;
    while (l <= r) {
        int m = l + (r - l) / 2; // чтобы не было переполнения
        if (a[m] == value) {
            return m;
        }
        if (a[m] < value) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return -1;
}
// Тестирование корректности бинпоиска с помощью стресс тестирования

// Функция которая выдаёт случайное число в заданном диапазоне
int getRandomInt(int minValue, int maxValue) {
    static minstd_rand generator; // генератор случайных чисел
    //создаём равномерное целочисленное распределение c заданными границами
    uniform_int_distribution<int> distribution(minValue, maxValue);
    return distribution(generator);
}

// Функция которая будет создавать отсортированный массив заполненный случайными числами заданной длины
vector<int> generateSortedArray(int size, int minValue, int maxValue) {
    vector<int> a(size);
    for (int &element: a) {
        // minValue - это левая граница maxValue - правая граница
        element = getRandomInt(minValue, maxValue);
    }
    sort(a.begin(), a.end());
    return a;
}

// Функция для теста корректности
void singleTestBinsearchCorrectness(int arraySize, int minValue, int maxValue) {
    vector<int> a = generateSortedArray(arraySize, minValue, maxValue);
    int targetValue = getRandomInt(minValue, maxValue);
    int index = binsearch(a, targetValue);
    if (index != - 1 && a[index] != targetValue) {
        cout << "Error";
    }
}

void multipleTestBinSearchCorrectness(int testCount, int arraySize, int minValue, int maxValue) {
    for (int test = 0; test < testCount; test++) {
        singleTestBinsearchCorrectness(arraySize, minValue, maxValue);
    }
}


