#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

void scanf_printf() {
    int x, y;
    // scanf("%d:%d", &x, &y);
    // printf("%d:%d", x, y);
    string date;
    cin >> date;
    char buff[100];
    sscanf(date.c_str(), "%d:%d", &x, &y); // позволяет считать из строки
    sprintf(buff, "%d:%d", x , y);
}


void A() {
    int hours, minute, a;
    scanf("%d:%d %d", &hours, &minute, &a);

    hours = (hours + (minute + a) / 60) % 24;
    minute = (minute + a) % 60;
    printf("%02d:%02d", hours, minute);

}

class Date {
public:
    int years;
    int months;
    int days;
    int hours;
    int minutes;
    int seconds;

    Date(int years, int months, int days, int hours, int minutes, int seconds) {
        this->years = years;
        this->months = months;
        this->days = days;
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    }
};

bool comparator(Date& date_1, Date& date_2) {
    if (date_1.years < date_2.years) return true;
    if (date_1.years > date_2.years) return false;
    if (date_1.months < date_2.months) return true;
    if (date_1.months > date_2.months) return false;
    if (date_1.days < date_2.days) return true;
    if (date_1.days > date_2.days) return false;
    if (date_1.hours < date_2.hours) return true;
    if (date_1.hours > date_2.hours) return false;
    if (date_1.minutes < date_2.minutes) return true;
    if (date_1.minutes > date_2.minutes) return false;
    if (date_1.seconds < date_2.seconds) return true;
    if (date_1.seconds > date_2.seconds) return false;
}

void B_my_solve() {
    int n;
    cin >> n;
    vector<Date> dates;
    while (n--) {
        int seconds, minute, hours, days, months, years;
        scanf("%02d:%02d:%02d %02d.%02d.%04d", &seconds, &minute, &hours, &days, &months, &years);
        dates.emplace_back(years, months, days, hours, minute, seconds);
    }

    sort(dates.begin(), dates.end(), comparator);
    for (Date date : dates) {
        printf("%02d:%02d:%02d %02d.%02d.%04d", date.seconds, date.minutes, date.hours, date.days, date.months, date.years);
        cout << '\n';
    }
}

void B_razbor() {
    int n;
    cin >> n;
    vector<string> times;
    while (n--) {
        int seconds, minute, hours, days, months, years;
        scanf("%02d:%02d:%02d %02d.%02d.%04d", &seconds, &minute, &hours, &days, &months, &years);
        char result[100];
    }
}

int main() {
    scanf_printf();
}