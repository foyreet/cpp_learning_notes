#include <iostream>
#include <vector>
int main() {
    int counter = 0;
    int kolvo_amazing_subtractions = 0;
    int count_of_amazing_substractions = 0;
    int n;
    std::cin >> n;
    std::vector<int> balls;
    for (int i = 0; i < n; i++) {
        int ball;
        std::cin >> ball;
        balls.push_back(ball);
    }
    int max = balls[0];
    int min = balls[0];
    for (int i = 0; i < n; i++) {
            if (balls[i] > max) {
                max = balls[i];
                counter++;
            }
            if (balls[i] < min) {
                min = balls[i];
                counter++;
            }
    }
    std::cout << counter;

}