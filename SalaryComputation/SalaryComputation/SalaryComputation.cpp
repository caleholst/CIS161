// SalaryComputation.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std;

int main() {
    // I made them all doubles so they are able to deal with decimals. 
    double hourlyWage; // made double
    double workHoursPerWeek; // made double
    double weeklySalary; // made double
    double annualSalary; // made double
    const int weeksInYear = 50; // Fixed magic number

    cout << "How many hours do you work per week?" << endl;
    cin >> workHoursPerWeek;

    cout << "What is your hourly wage?" << endl;
    cin >> hourlyWage;

    weeklySalary = hourlyWage * workHoursPerWeek;
    cout << "Weekly salary is: ";
    cout << weeklySalary << endl;

    annualSalary = weeklySalary * weeksInYear;
    cout << "Annual salary is: ";
    cout << annualSalary << endl;

    return 0;
}
