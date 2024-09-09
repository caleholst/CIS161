// BuggySalaryCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    const int MAX_HOURS_IN_WEEK = 168;
    const int MAX_WAGE = 100;
    const int LOWER_SALARY = 200;
    const int UPPER_SALARY = 800;

    int hourlyWage;
    int workHoursPerWeek;
    int weeklySalary;

    cout << "How many hours do you work per week?" << endl;
    cin >> workHoursPerWeek;
    // changed && to || so you get the message when you enter an invalid hours worked
    if (workHoursPerWeek < 0 || workHoursPerWeek > MAX_HOURS_IN_WEEK) {
        cout << "Invalid number of hours per week." << endl;
        return -1;
    }

    cout << "What is your hourly wage?" << endl;
    cin >> hourlyWage;
    // added "return -1;" so the code under doesnt run when you enter an invlaid amount. 
    if (hourlyWage > MAX_WAGE) {
        cout << "An hourly wage greater than 100 requires executive approval." << endl;
        return -1;
    }
    else if (hourlyWage < 0) {
        cout << "Invalid hourly wage." << endl;
        return -1;
    }

    weeklySalary = hourlyWage * workHoursPerWeek;

    if (weeklySalary < LOWER_SALARY) {
        cout << "The weekly salary is less than 200." << endl;
    }
    /*
    Changed if to else if to make it so only one of the statements run 
    added &&  weeklySalary >= LOWER_SALARY to make sure it is within the wanted range
    */
    else if (weeklySalary <= UPPER_SALARY &&  weeklySalary >= LOWER_SALARY) { 
        cout << "The weekly salary is between 200 and 800." << endl;
    }
    else {
        cout << "The weekly salary is greater than 800." << endl;
    }

    return 0;
}

