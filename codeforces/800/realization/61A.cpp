#include <iostream>
#include <string>
int main() {
    std::string s1;
    std::string s2;
    std::string s3;
    std::cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            s3.append("1");
        } else {
            s3.append("0");
        }
    }
    std::cout << s3;
}