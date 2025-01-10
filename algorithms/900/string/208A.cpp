#include <iostream>
#include <string>

using namespace std;

void my_solve() {
    string to_delete = "WUB";
    string s;
    cin >> s;
    size_t start {s.find((to_delete))}; // позиция подстроки
    while (start != string::npos) {
        s.erase(start, to_delete.length());
        start = s.find(to_delete, start + to_delete.length());
    }
    cout << s;
}

int main() {
    my_solve();
}