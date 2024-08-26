// DebuggingWithErrorMessagesHolst.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	int hourlyWage;
	int OneYearSalary;

	cout << "What is the hourly wage?" << endl;
	cin >> hourlyWage;

	OneYearSalary = hourlyWage * 40 * 50;

	cout << "Annual salary is: " << OneYearSalary << endl;

	return 0;
}