/* Rea Angela Vera Cruz
Assignment 3 - Array Power
*/

#include <iostream>

using namespace std;

int main() {
    int index[30];

    index[0] = 0;
    index[1] = 1;

    for (int n = 2; n <= 29; n++) {
        index[n] = n * n - index[n - 1];
    }


    char anotherValue; // This is for asking the user if they want to continue.

    do {
        int number;

        cout << "Enter an index number between 0 and 29 to find the value at that place in the sequence:" << endl;
        cin >> number;

        if (number <= 0 || number >= 29) {
            cout << "Invalid. Please try again.";
            break; // This is so if the user enters a number that is not between 0 and 29, the code stops running.
        }

        cout << "The value is: " << index[number] << endl;
        cout << "Would you like to find another value? (y/n)";
        cin >> anotherValue;
    } while (anotherValue == 'y' || anotherValue == 'Y');
}