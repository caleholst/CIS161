// ReturnValueFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

using namespace std;
// temp stands for tempature not temporary
double averageFourTemperatures(int temp1, int temp2, int temp3, int temp4) {
    return (temp1 + temp2 + temp3 + temp4) / 4.0;
}

int main() {
    // Variables to hold the temperatures
    int temperature1, temperature2, temperature3, temperature4;

    // get the temps
    cout << "Enter the first temperature: ";
    cin >> temperature1;
    cout << "Enter the second temperature: ";
    cin >> temperature2;
    cout << "Enter the third temperature: ";
    cin >> temperature3;
    cout << "Enter the fourth temperature: ";
    cin >> temperature4;


    // calling function and displaying 
    double average = averageFourTemperatures(temperature1, temperature2, temperature3, temperature4);
    cout << "The average temperature is: " << average << endl;

    return 0;
}

