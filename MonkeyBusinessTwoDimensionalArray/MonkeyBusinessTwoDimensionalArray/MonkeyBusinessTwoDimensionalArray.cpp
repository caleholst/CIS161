// MonkeyBusinessTwoDimensionalArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// average function to find the average from the whole family
double average(int food[][5], int numMonkeys, int numDays) {
    int totalFood = 0;
    for (int i = 0; i < numMonkeys; i++) {
        for (int j = 0; j < numDays; j++) {
            totalFood += food[i][j];
        }
    }
    return static_cast<double>(totalFood) / (numMonkeys * numDays);
}

// least function to get the lowest amount any monkey ate throughout the week
int least(int food[][5], int numMonkeys, int numDays) {
    int leastAmount = food[0][0];
    for (int i = 0; i < numMonkeys; i++) {
        for (int j = 0; j < numDays; j++) {
            if (food[i][j] < leastAmount) {
                leastAmount = food[i][j];
            }
        }
    }
    return leastAmount;
}

// greastest function to get the greatest amount any monkey ate throughout the week.
int greatest(int food[][5], int numMonkeys, int numDays) {
    int greatestAmount = food[0][0];
    for (int i = 0; i < numMonkeys; i++) {
        for (int j = 0; j < numDays; j++) {
            if (food[i][j] > greatestAmount) {
                greatestAmount = food[i][j];
            }
        }
    }
    return greatestAmount;
}
int main()
{
    const int numMonkeys = 3;
    const int numDays = 5;
    int food[numMonkeys][numDays];

    // get the input for the amount the monkies ate. 
    cout << "Enter the pounds of food eaten by each monkey for each day of the week.\n";
    for (int i = 0; i < numMonkeys; i++) {
        for (int j = 0; j < numDays; j++) {
            cout << "Monkey " << (i + 1) << ", Day " << (j + 1) << ": ";
            cin >> food[i][j];
        }
    }

    // display the results
    cout << "\n--- Food Consumption Report ---\n";
    cout << "Average amount of food eaten per day by the whole family: " << average(food, numMonkeys, numDays) << " pounds\n";
    cout << "Least amount of food eaten by any monkey during the week: " << least(food, numMonkeys, numDays) << " pounds\n";
    cout << "Greatest amount of food eaten by any monkey during the week: " << greatest(food, numMonkeys, numDays) << " pounds\n";

    return 0;
   
}
