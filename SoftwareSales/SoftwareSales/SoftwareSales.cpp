// SoftwareSales.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip> // so i can use setprecision
using namespace std;

int main()
{
    const int package = 99; // given package price
    const float twentyPercentDiscount = .80; // 20 percnet discount
    const float thirtyPercentDiscount = .70; // 30 percent discount
    const float fourtyPercentDiscount = .60; // 40 percent discount
    const float fiftyPercentDiscount = .50; // 50 percent discount
    int discount;
    int quantity; 
    double finalPrice;


    cout << "How many packages are you ordering? " << endl;
    cin >> quantity;

    if (quantity < 0) { // input validation
        cout << "Quantity can't be negative";
        return -1;
    }

    if (quantity > 10 && quantity < 20) { // getting the range 10 to 19
        finalPrice = quantity * package; 
        finalPrice = finalPrice * twentyPercentDiscount; // discounting by 20% 
      
    }
    else if (quantity >= 20 && quantity < 50) { // getting the range 20 to 49
        finalPrice = quantity * package;
        finalPrice = finalPrice * thirtyPercentDiscount; // discounting by 30%
    }
    else if (quantity >= 50 && quantity < 100) { // getting the range from 50 to 99 
        finalPrice = quantity * package;
        finalPrice = finalPrice * fourtyPercentDiscount; // discounting by 40%

    }
    else if (quantity <= 100) { // getting range 100+ 
        finalPrice = quantity * package;
        finalPrice = finalPrice * fiftyPercentDiscount; // discounting by 50%
    }
    else { // getting range for under 10 or anything else that somehow is outside of the ranges. 
        finalPrice = quantity * package; 
    }

    cout << fixed << setprecision(2); // setting decimals to the first two places 
    cout << "Your price is: " << finalPrice; // printing the final price

}

