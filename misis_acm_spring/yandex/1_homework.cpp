#include <iostream>
#include <vector>

using ll = long long;
using namespace std;

void A() {
    int p, v, q, m;
    cin >> p >> v >> q >> m;
    if (q - m <= p + v) {

    }
}

void B() {
    int match_1_1, match_1_2, match_2_1, match_2_2, cnt;
    scanf("%d:%d", &match_1_1, &match_1_2);
    scanf("%d:%d", &match_2_1, &match_2_2);
    cin >> cnt;
    int sum_points_1 = match_1_1 + match_2_1;
    int sum_points_2 = match_1_2 + match_2_2;
    if (cnt == 1) {
        if (sum_points_1 > sum_points_2) {
            // 1 win
        } else if (sum_points_1 < sum_points_2) {
            // 2 win
        } else if (sum_points_1 == sum_points_2) {
            if (match_1_2 > match_2_1) {
                // 1 win
            } else if (match_1_2 < match_2_1){
                // 2 win
            } else {
                // доп тайм
            }
        }
    } else if (cnt == 2) {
        if (sum_points_1 > sum_points_2) {
            // 1 win
        } else if (sum_points_1 < sum_points_2) {
            // 2 win
        } else if (sum_points_1 == sum_points_2) {
            if (match_1_1 > match_2_2) {
                // 1 win
            } else if (match_1_1 < match_2_2){
                // 2 win
            } else {
                // доп тайм
            }
        }
    }

}

int main() {
    A();
}