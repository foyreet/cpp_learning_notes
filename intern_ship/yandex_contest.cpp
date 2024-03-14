#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void A() {
    string text;
    getline(cin, text);
    string delimiter = " ";
    // "a,b"
    // "a, b"
    // "a , b"
    // "a ,b"


    // "bc"
    // {"abc", "abc,"}
    vector<string> words;

    size_t pos;
    while ((pos = text.find(delimiter)) != string::npos) {
        string word = text.substr(0, pos);
        words.push_back(word);
        text.erase(0, pos + delimiter.length());
    }

    if (!text.empty()) {
        words.push_back(text);
    }

    size_t maxLength = 0;
    for (string word : words) {
        size_t currentLength = word.length();
        if (word[word.length() - 1] == ',') {
            currentLength--;
        }

        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    size_t len = maxLength * 3;
    size_t counter = 0;
    for (string word : words) {
        if (counter + word.length() <= len) {
            if (counter != 0) {
                cout << " ";
            }
            cout << word;
        } else {
            cout <<
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    A();
}
