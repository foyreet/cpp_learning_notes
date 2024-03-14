#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


/*
Метрики
Евклидова меттрика
DIST_EVKLID = sqrt(x2 - x1)^ 2 + (y2 - y1)^y2
DIST_Manhetten = abs(x1 - x2) + abs(y1 - y2);
DIST_kING = max(abs(x1 - x2), abs(y1 - y2));
*/
void A() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    long long dist_king = max(abs(x1 - x2), abs(y1 - y2));
    cout << dist_king;
}

/*
Вместо кучи if и условий будем находить max и min
Предыдущие и следующие строку и столбец
*/
void B_razbor() {
    char column, row;
    cin >> column >> row;
    int minCol = max(0, column - 'a' - 1); // предыдущий столбец
    int maxCol = min(7, column - 'a' + 1); // следующий столбец
    int minRow = max(0, row - '1' - 1); // предыдущая строка
    int maxRow = min(7, row - '1' + 1); // следующая строка

    int result = (maxRow - minRow + 1) * (maxCol - minCol + 1) - 1;
    cout << result;

}

void C() {
    int x1, y1, x2, y2, x ,y;
    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
    if ((abs(x2 - x1) / x + abs(y2 - y1) / y) % 2 == 0) {
        if  (abs(x2 - x1) % x == 0 && (abs(y2 - y1) % y == 0)) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    } else {
        cout << "NO";
    }

}
int main() {
    C();
}
