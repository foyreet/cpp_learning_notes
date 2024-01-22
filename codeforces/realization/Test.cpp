//
// Created by Mikhail Erdyakov on 20.01.2024.
//
#include <iostream>
#include <string>

using namespace std;

void swap(string& s, int i, int j) {
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}

int main() {
    string s = "123";
    swap(s, 0, 1);
    cout << s;
}