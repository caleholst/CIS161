#include <iostream>
#include <iomanip>
using namespace std;

// Overloaded function
double calculateCharges(int days, double dailyRate, double medicationCharges, double serviceCharges) {
    return (days * dailyRate) + medicationCharges + serviceCharges;
}

// Overloaded function
double calculateCharges(double medicationCharges, double serviceCharges) {
    return medicationCharges + serviceCharges;
}

int main() {
    char patientType;

    cout << "Enter 'I' for inpatient or 'O' for outpatient: ";
    cin >> patientType;
    patientType = toupper(patientType); // making sure it is always uppercase

    if (patientType == 'I') {
        int days;
        double dailyRate, medicationCharges, serviceCharges;

        cout << "Enter the number of days spent in the hospital: ";
        cin >> days;

        cout << "Enter the daily rate: ";
        cin >> dailyRate;

        cout << "Enter hospital medication charges: ";
        cin >> medicationCharges;

        cout << "Enter charges for hospital services (lab tests, etc.): ";
        cin >> serviceCharges;


        // calling function and displaying 
        double totalCharges = calculateCharges(days, dailyRate, medicationCharges, serviceCharges);
        cout << fixed << showpoint << setprecision(2);
        cout << "Total charges for inpatient: $" << totalCharges << endl;

    }
    else if (patientType == 'O') {
        double medicationCharges, serviceCharges;

        cout << "Enter hospital medication charges: ";
        cin >> medicationCharges;

        cout << "Enter charges for hospital services (lab tests, etc.): ";
        cin >> serviceCharges;

        // calling function and displaying
        double totalCharges = calculateCharges(medicationCharges, serviceCharges);
        cout << fixed << showpoint << setprecision(2);
        cout << "Total charges for outpatient: $" << totalCharges << endl;

    }
    else {
        // making sure the user enters a I or O 
        cout << "Invalid input. Please enter 'I' or 'O'." << endl;
    }

    return 0;
}
