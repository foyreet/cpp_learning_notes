// Округление вверх 5 / 3 = 2
int div_up(int x, int y) {
    return (x + y - 1) / y;
}
// Чтобы избежать переполнения
int div_up2(int x, int y) {
    return (x - 1) / y + 1;
}

