#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr))); // i'm not sure how to make uint work, I googled it and it said to use unsigned int so I did that.
    int secret = rand() % 10 + 1;
    int guess;

    cout << "Guess a number between 1 and 10." << endl;
    cin >> guess;
    while (guess < 0 || guess > 10) {
        cout << "That is not a number between 1 and 10, try again." << endl;
        cin >> guess; // allow the user to guess while in the loop 
    }

    while (guess != secret) {
        if (guess < secret) {
            cout << "Too low, try again." << endl;
        }
        else {
            cout << "Too high, try again." << endl;
        }
        cin >> guess; // allow the user to guess again
    }
    cout << "Correct!" << endl;

    return 0;
}