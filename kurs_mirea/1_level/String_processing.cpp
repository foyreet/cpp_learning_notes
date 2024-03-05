#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define isz(x) int((x).size()) // позволяет брать размер вектора, string, set и тд

using namespace std;

/*
 Нельзя использовать cin и getline вместе без cin.ignore
 Можно использовать если пропишем
 cin >> a;
 cin.ignore(); - игнорирует прочитанный символ из потока
 (игнорирует перенос строки в нашем случае)
 getline(cin, b);
 */

void cin_getline() {
    string a, b;
    cin >> a; // cin - считывает до пробела
    cin.ignore();
    getline(cin, b);
    cout << a << '\n' << b;
}

/*
 char(tolower(c)) - приведение большой буквы к маленькой
 char(toupper(c)) - приведение маленькой буквы к заглавной
 */
void tolower_toupper() {
    char c = 'A';
    char b = 'b';
    cout << char(tolower(c)) << " " << char(toupper(b));
}

/*
 Лексикографический порядок векторов можно тоже осуществлять
 */

void lexicographic_order_vector() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {0, 2};
    cout << boolalpha << (a < b) << '\n';
    cout << (a > b); // boolalpha возвращает true или false работает до того пока не отменишь
}

/*
 Для sort заранее предусмотрена логика лексикографического сравнения
 */
void sort_lexicographic_order_vector() {
    int n;
    cin >> n;
    vector<vector<int>> vec(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec[i].resize(x);
        for (int j = 0; j < x; j++) cin >> vec[i][j];
    }
    sort(vec.begin(), vec.end());

    for (auto &v: vec) {
        for (auto &el: v) cout << el << " ";
        cout << '\n';
    }
}

/*
 у size() тип size_t и при вычитании из меньшего размера строки больший размер строки
 получаем переполнение. Чтобы этого избежать нужно явно привести к типу int
 */
void size() {
    string a, b;
    cin >> a >> b;
    cout << isz(a) - isz(b);
}

void metod_string() {
    string a = "absbs";
    string b = "ab";
    a.push_back('a'); // в puch_back можно передать только char(string нельзя)
    a.pop_back(); // удалит последний символ строки
    a.back(); // возвращает последний символ строки
    a.front(); // возвращает 1 - ый элемент строки
    // a + b - конкатенация строк
    string str;
    cin >> str;
    // cout << str.substr(0, 3); поиск подстроки в строке
    string s = to_string(1230); // int to string
    int x = stoi(str); // string to int
    long long y = stoll(str); // string to long long
    size_t pos = str.find("ell"); // возвращает первую позицию с которой начинается подстрока
    cout << x;

}

void A() {
    string s;
    cin >> s;
    string result;
    if (s[0] == '9') {
        result.push_back('1');
        for (int i = 0; i < isz(s); i++) {
            result.push_back('0');
        }
    } else {
        char c = s[0] + 1;
        result.push_back(c);
        for (int i = 0; i < isz(s) - 1; i++) {
            result.push_back('0');
        }
    }
    cout << stoi(result) - stoi(s);
}

void B() {
    int n; cin >> n;
    string s; cin >> s;
    s += '0';
    int currBlockLen = 0;
    for (int i = 0; i <= n; i++) {
        if (s[i] == '0') {
            cout << currBlockLen;
            currBlockLen = 0;
        } else {
            currBlockLen++;
        }
    }
}

void C() {
    string s;
    cin >> s;

}

int main() {
    B();
}