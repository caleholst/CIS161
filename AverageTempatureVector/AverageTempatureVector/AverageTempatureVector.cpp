// AverageTempatureVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    vector<double> temperatures;
    double temp;
    char choice;

    // do while to get the user inputed tempatures
    do {
        cout << "Enter a temperature: ";
        cin >> temp;
        temperatures.push_back(temp);

        cout << "Do you want to enter another temperature? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    // check if there are any temperatures entered
    if (temperatures.empty()) {
        cout << "No temperatures entered.\n";
        return 0;
    }


    // loop to get tempature on even days sum
    double sumEvenTemps = 0.0;
    int evenCount = 0;

    for (size_t i = 0; i < temperatures.size(); i += 2) {
        sumEvenTemps += temperatures[i];
        evenCount++;
    }

    // calculate and printing the average
    if (evenCount > 0) {
        double average = sumEvenTemps / evenCount;
        cout << "The average temperature on even days is: "
            << fixed << setprecision(2) << average << endl;
    }
    else {
        cout << "No even days found.\n";
    }

    return 0;
}

