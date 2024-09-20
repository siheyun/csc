/* Rea Angela Vera Cruz 08/29/24
Assignment #2 - Ages and Birthdays
*/

#include <iostream>

using namespace std;

int main () {
    int age;
    cout << "What is your current age?" << endl;
    cin >> age;

    int yearsUntilNextDecade = 10 - (age % 10);
    int currentDecade= age / 10;
    int nextDecade = (age / 10 + 1) * 10;

    cout << "There are " << yearsUntilNextDecade << " years until your next decade birthday." << endl;
    cout << "You will then be in decade " << currentDecade + 1 << " of your life." << endl;

    if (age <= 17) {
        cout << "Kids birthdays should always be celebrated!" << endl;
    } else if (yearsUntilNextDecade == 5) {
        /* this is "else" because it's false/doesn't apply for 17 and younger,
        this is also for if the user is halfway through decade birthday */
        cout << "You should throw a party!" << endl;
    } else if (yearsUntilNextDecade == 1) {
        // this is "else" because it's false for 17 and younger,
        if (nextDecade % 20 == 0) {
            // % 20 so it applies to even decades
            cout << "Plan a HUGE party for your decade birthday!" << endl;;
        } else {
            // else because another statement will be printed for odd decade birthdays
            cout << "Plan a big party for your decade birthday!" << endl;
        }
    } else {
        // else because everything above is false, and this statement will apply for all other ages
        cout << "Have fun with friends and family on your next birthday." << endl;
    }

    return 0;
}

