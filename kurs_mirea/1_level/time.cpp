#include <iostream>
using namespace std;

void scanf_printf() {
    int x, y;
    scanf("%d:%d", &x, &y);
    printf("%d:%d", x, y);
}



void A() {
    int hours, minute, a;
    scanf("%d:%d", &hours, &minute);
    cin >> a;
    printf("%d:%d", ((hours + a / 60) + ((minute + a) / 60) % 24, (minute + a % 60) % 60));
}
int main() {
    A();
}