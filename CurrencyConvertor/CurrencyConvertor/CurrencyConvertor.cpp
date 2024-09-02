// CurrencyConvertor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// all currency conversions were got from https://www.forbes.com/advisor/money-transfer/currency-converter/
//Currency conversion calculator | currency converter - forbes advisor(no date) Forbes.Available at : https://www.forbes.com/advisor/money-transfer/currency-converter/ (Accessed: 02 September 2024). 

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double currencyAmount;
    double total = 0.0; 
    // I know you are supposed to start variables with lower case but I wasn't sure for this situation because the appreviations are supposed to be capitalized.
    double EURToUSDConversion = 1.106965; // this is the conversion as of September 2nd 2024 13:17
    double MXMToUSDConversion = 0.050521; // this is the conversion as of September 2nd 2024 13:24
    double CNYToUSDConversion = 0.140495; // this is the conversion as of September 2nd 2024 13:26


    cout << "How Many Euros do you Have?" << endl;
    cin >> currencyAmount;
    
    currencyAmount = currencyAmount * EURToUSDConversion;
    total += currencyAmount;

    cout << "How Many Pesos do you Have?" << endl;
    cin >> currencyAmount;

    currencyAmount = currencyAmount * MXMToUSDConversion;
    total += currencyAmount;

    cout << "How many Yuan do you Have?" << endl; // the assignment says Chinese Yen but that isn't a currency so I just did China's currency.
    cin >> currencyAmount;

    currencyAmount = currencyAmount * CNYToUSDConversion;
    total += currencyAmount;


    cout << fixed << setprecision(2);
    cout << "Total: $" << total << endl; // $ implies USD right? 

}
