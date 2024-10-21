#include <iostream>
#include <string>

using namespace std;


enum DayOfWeek {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};

string dayOfWeekToString(DayOfWeek day) {
    switch (day) {
    case SUNDAY: return "Sunday";
    case MONDAY: return "Monday";
    case TUESDAY: return "Tuesday";
    case WEDNESDAY: return "Wednesday";
    case THURSDAY: return "Thursday";
    case FRIDAY: return "Friday";
    case SATURDAY: return "Saturday";
    default: return "Unknown";
    }
}

struct Date {
    DayOfWeek day;
    int dayOfMonth;
    int month;
    int year;
};

int main() {
    Date date;
    int dayNumber;

    do {
        cout << "Enter the day of the week (0 = Sunday, 1 = Monday, 2 = Tuesday, etc.): ";
        cin >> dayNumber;
    } while (dayNumber < 0 || dayNumber > 6);

  
    date.day = static_cast<DayOfWeek>(dayNumber);


    do {
        cout << "Enter the day of the month (1-31): ";
        cin >> date.dayOfMonth;
    } while (date.dayOfMonth < 1 || date.dayOfMonth > 31);

    do {
        cout << "Enter the month (1-12): ";
        cin >> date.month;
    } while (date.month < 1 || date.month > 12);

    do {
        cout << "Enter the year: ";
        cin >> date.year;
    } while (date.year < 1);

    cout << dayOfWeekToString(date.day) << ", " << date.month << "/" << date.dayOfMonth << "/" << date.year << endl;

    return 0;
}