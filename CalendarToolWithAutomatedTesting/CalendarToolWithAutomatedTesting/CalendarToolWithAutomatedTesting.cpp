// CalendarToolWithAutomatedTesting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert> // for the unit testing 
using namespace std;

void getUserInput(int& year, int& month) {
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month (1-12): ";
    cin >> month;
}

bool isValidInput(int year, int month) {
    return (year > 0 && month >= 1 && month <= 12);
}

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;  // Leap year
            }
            else {
                return false; // Not a leap year
            }
        }
        else {
            return true;  // Leap year
        }
    }
    return false; // Not a leap year
}

int daysInMonth(int year, int month) {
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return isLeapYear(year) ? 29 : 28;
    default:
        return -1;  
    }
}
#define RUN_TESTS //comment out if you want to run tests

#ifndef RUN_TESTS
int main()
{
    int year, month;
    getUserInput(year, month);

    if (!isValidInput(year, month)) {
        cout << "Invalid input. Please enter a valid year and month." << endl;
        return 1;
    }

    int days = daysInMonth(year, month);
    cout << "Number of days in month " << month << " of year " << year << " is: " << days << endl;

    return 0;
}
// the assignment made it seem like you wanted the test on the same file so I did it this way, would it have been fine if I did them on a seperate file? 
#else
void runTests() {
    // Test for leap year function
    cout << "Running leap year tests..." << endl;
    cout << (isLeapYear(2000) ? "Pass" : "Fail") << " - 2000 is a leap year." << endl;
    cout << (isLeapYear(2400) ? "Pass" : "Fail") << " - 2400 is a leap year." << endl;
    cout << (!isLeapYear(1900) ? "Pass" : "Fail") << " - 1900 is not a leap year." << endl;
    cout << (!isLeapYear(2100) ? "Pass" : "Fail") << " - 2100 is not a leap year." << endl;

    // Test for days in month function
    cout << "\nRunning days in month tests..." << endl;
    cout << (daysInMonth(2023, 2) == 28 ? "Pass" : "Fail") << " - February 2023 has 28 days." << endl;
    cout << (daysInMonth(2024, 2) == 29 ? "Pass" : "Fail") << " - February 2024 has 29 days." << endl;
    cout << (daysInMonth(2023, 1) == 31 ? "Pass" : "Fail") << " - January 2023 has 31 days." << endl;

    // Test for valid input function
    cout << "\nRunning input validation tests..." << endl;
    cout << (isValidInput(2023, 12) ? "Pass" : "Fail") << " - December 2023 is a valid input." << endl;
    cout << (!isValidInput(-2023, 12) ? "Pass" : "Fail") << " - Negative year is invalid." << endl;
    cout << (!isValidInput(2023, 13) ? "Pass" : "Fail") << " - Month 13 is invalid." << endl;
}

int main() {
    runTests();
    return 0;
}

#endif