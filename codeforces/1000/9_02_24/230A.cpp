#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

const int max_n = 1000;
pair <int, int> arr[max_n];

int main() {
    int s, n;
    cin >> s >> n;
   for (int i = 0; i < n; i++) {
       cin >> arr[i].first >> arr[i].second;
   }

   sort(arr, arr + n); // отсортировал 1 - ый столбик

   for (int i = 0; i < n; i++) {
       if (s <= arr[i].first) {
           cout << "NO";
           return 0;
       } else {
           s += arr[i].second;
       }
   }
   cout << "YES";
}