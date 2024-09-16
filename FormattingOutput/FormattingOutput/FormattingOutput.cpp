#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    double principal;
    double rate;
    double amount;
    int timesCompounded;

    while (true) {
        cout << "Enter principal: ";
        cin >> principal;
        cout << "Enter interest rate (as percent): ";
        cin >> rate;
        cout << "Enter number of times compounded: ";
        cin >> timesCompounded;

        rate /= 100; // to make percentage

        amount = principal * pow((1 + rate / timesCompounded), timesCompounded); // formula for compound interest 

        cout << fixed << showpoint;
        cout.precision(2);
        
        // I couldnt find out how to format it exactly like how it was wanted, when you use a number to small or to big it is off by a little
        cout << endl;
        cout << setw(25) << left << "Interest Rate:" << setw(14) << right << rate * 100 << "%" << endl;
        cout << setw(30) << left << "Times Compounded:" << setw(10) << right << timesCompounded << endl;
        cout << setw(25) << left << "Principal:" << setw(9) << right << "$" << principal << endl;
        cout << setw(25) << left << "Amount in Savings:" << setw(9) << right << "$" << amount << endl;
        cout << endl;

        char choice;
        cout << "Do you want to calculate again (y/n)? \n ";
        cin >> choice;
        if (choice != 'y' && choice != 'Y') break;
    }

    return 0;
}
