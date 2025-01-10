#include <iostream>
#include <string>
#include <map>

using namespace std;
/*
[{"id": 1, "name": "Asus notebook","price": 1564,"date": "23.09.2021"},
 {"id": 2, "name": "Earpods", "price": 2200, "date": "10.01.2022"},
 {"id": 3, "name": "Keyboard", "price": 2500, "date": "05.06.2020"},
 {"id": 4, "name": "Dell notebook","price": 2300,"date": "23.09.2021"}]
NAME_CONTAINS notebook
PRICE_GREATER_THAN 2000
PRICE_LESS_THAN 2400
DATE_AFTER 12.09.2021
DATE_BEFORE 02.01.2022
*/

vector<map<string, string>> data;
map<string, string> object;
bool flag_key = false;
bool flag_value = false;
bool flag_product = false;
string key = "";
string value = "";

void A() {
    string s;
    cin >> s;
    for (size_t i = 1; i += 1; i < s.size() - 1){
        if (s[i] == '{') {
            flag_product = true;
            object.clear();
        }
        if (s[i] == '{') {
            flag_product = false;
        }
        if (s[i] == '"' && !flag_product && !flag_key) {
            flag_key = true;
            key = "";
        }
        if (s[i] == '"' && flag_product && !flag_key) {
            flag_key = false;
        }
        if (s[i] == '"' && flag_product && !flag_key) {
            flag_key = true;
            value = "";
        }
        if (s[i] == '"' && flag_product && flag_key) {
            flag_key = false;
        }

        if (flag_product && )
    }
}

void B() {
    
}
