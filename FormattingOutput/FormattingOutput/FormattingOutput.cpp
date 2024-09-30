#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;

double getValidInput(const string& prompt) {
    double value;
    while (true) {
        cout << prompt;
        cin >> value;
        if (cin.fail() || value < 0) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input. Please enter a positive number." << endl;
        }
        else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            return value;
        }
    }
}

int main() {
    double principal;
    double rate;
    double amount;
    int timesCompounded;

    principal = getValidInput("Enter principal: ");
    rate = getValidInput("Enter interest rate (as percent): ") / 100; 
    timesCompounded = static_cast<int>(getValidInput("Enter number of times compounded: "));

    amount = principal * pow((1 + rate / timesCompounded), timesCompounded);

    cout << fixed << setprecision(2);
    cout << "Interest Rate:           " << rate * 100 << "%" << endl;
    cout << "Times Compounded:           " << timesCompounded << endl;
    cout << "Principal:         $   " << principal << endl;
    cout << "Amount in Savings: $   " << amount << endl;

    return 0;
}