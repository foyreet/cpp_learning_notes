#include <iostream>

int GCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return GCD(b, a % b);
    }
}

int main() {
    int const CUBE_SIDES = 8;
    int Y, W;
    std::cin >> Y >> W;
    int max = Y > W ? Y : W;

    int countOfNumbersForDotWinning = CUBE_SIDES - max + 1; // [4, 5, 6] -> 3
    // Считаем НОД для того, чтобы привести дроби к несократимым 3/6 -> 1/2
    int gcd = GCD(countOfNumbersForDotWinning, CUBE_SIDES);
    // Приводим дроби к несократимым
    int numerator = countOfNumbersForDotWinning / gcd;
    int denominator = CUBE_SIDES / gcd;
    printf("%d/%d", numerator, denominator);
}