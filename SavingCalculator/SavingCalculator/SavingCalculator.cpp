#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string name; 
    double rate; 
    int salary;
    double accountValue;

 

    while (true) {
        cout << "Enter name (q to quit): ";
        cin >> name;

        if (name == "q") {
            cout << "bye";
            break;
        }

        cout << "Enter savings rate: ";
        cin >> rate;

        while (rate < 0) {
            cout << "Rate cannot be negative, enter a new rate." << endl;
            cout << "Please enter a postive rate: ";
            cin >> rate;
        }

        cout << "Enter salary: ";
        cin >> salary;

        while (salary < 0) {
            cout << "Salary cannot be negative, enter a new salary." << endl;
            cout << "Please enter a postive salary: ";
            cin >> salary;
        }

        accountValue = 0.0;

        cout << "The account values for " << name << " are:\n";

        for (int year = 1; year <= 10; ++year) { // for loop to calculate the values of savings 
            accountValue = (accountValue + rate * salary) * 1.08;
            cout << fixed << showpoint << setprecision(2) << accountValue << endl;
        }
        cout << endl;

    }


}

